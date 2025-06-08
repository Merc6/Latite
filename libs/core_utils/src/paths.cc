#include "paths.hh"

#include <cstdlib>
#include <filesystem>

namespace latite::core_utils::paths {

std::filesystem::path const& get_root_dir() {
    static auto ROOT_DIR = getenv("LOCALAPPDATA");
    return ROOT_DIR;
}

std::filesystem::path const& get_roaming_dir() {
    static auto ROAMING_DIR = get_root_dir() / "../RoamingState";
    return ROAMING_DIR;
}

std::filesystem::path const& get_client_dir() {
    static auto CLIENT_DIR = get_roaming_dir() / "LatiteV3";
    return CLIENT_DIR;
}

} // namespace latite::core_utils::paths
