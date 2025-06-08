#include <filesystem>

namespace latite::core_utils::paths {

[[nodiscard]]
std::filesystem::path get_root_dir();

[[nodiscard]]
std::filesystem::path get_roaming_dir();

[[nodiscard]]
std::filesystem::path get_client_dir();

} // namespace latite::core_utils::paths
