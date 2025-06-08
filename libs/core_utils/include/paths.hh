#include <filesystem>

namespace latite::core_utils::paths {

extern std::filesystem::path get_root_dir();
extern std::filesystem::path get_roaming_dir();
extern std::filesystem::path get_client_dir();

} // namespace latite::core_utils::paths
