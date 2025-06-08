#include "log.hh"

#include <filesystem>
#include <string_view>

#include "paths.hh"

namespace latite::core_utils {

std::filesystem::path const& log::get_logs_dir() {
    static auto const LOGS_DIR = paths::get_client_dir() / "logs";
    return LOGS_DIR;
}

} // namespace latite::core_utils
