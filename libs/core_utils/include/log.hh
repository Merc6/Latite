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
