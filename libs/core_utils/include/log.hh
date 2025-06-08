#pragma once

#include <string_view>

namespace latite::core_utils::log {

enum class Level {
    Error,
    Warn,
    Info,
    Debug,
};

class Logger {
  public:
    Logger const& get_logger();
    Logger& get_logger_mut();

    Logger(Logger const& _logger) = delete;

  private:
    static Logger GLOBAL_LOGGER;
    Logger() {};
};

} // namespace latite::core_utils::log
