#pragma once
#include <filesystem>

namespace latite::core_utils::paths {

[[nodiscard]]
std::filesystem::path const& get_root_dir();

[[nodiscard]]
std::filesystem::path const& get_roaming_dir();

[[nodiscard]]
std::filesystem::path const& get_client_dir();

} // namespace latite::core_utils::paths
