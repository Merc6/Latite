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
        static auto const GLOBAL_LOGGER = Logger();
        return GLOBAL_LOGGER;
    };

    Logger(Logger const& _logger) = delete;

  private:
    Logger() {};
};

} // namespace latite::core_utils::log
