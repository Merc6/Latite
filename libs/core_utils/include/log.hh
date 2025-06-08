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
    Logger const& get_logger() {
        return _get_logger_mut();
    };

    Logger& get_logger_mut() {
        return _get_logger_mut();
    }

    Logger(Logger const& _logger) = delete;

  private:
    static Logger GLOBAL_LOGGER;

    Logger& _get_logger_mut() {
        Logger::GLOBAL_LOGGER = Logger();
        return GLOBAL_LOGGER;
    };

    Logger() {};
};

} // namespace latite::core_utils::log
