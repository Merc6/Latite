#include <filesystem>

namespace latite::core_utils::paths {

std::filesystem::path get_root_dir();
std::filesystem::path get_roaming_dir();
std::filesystem::path get_client_dir();

} // namespace latite::core_utils::paths
