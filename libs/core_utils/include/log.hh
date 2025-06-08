#pragma once

#include <filesystem>
#include <string_view>

#include "paths.hh"

namespace latite::core_utils::log {

std::filesystem::path const& get_logs_dir();

enum class Level {
    Error,
    Warn,
    Info,
    Debug,
};

class Logger {
  public:
    Logger(Logger const&) = delete;
    Logger& operator=(Logger const&) = delete;

    Logger const& get_logger() {
        static auto const GLOBAL_LOGGER = Logger();
        return GLOBAL_LOGGER;
    };

    void log(Level level, std::string_view msg);

  private:
    Logger() {};
};

} // namespace latite::core_utils::log
