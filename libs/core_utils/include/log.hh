#pragma once

#include <chrono>
#include <filesystem>
#include <fstream>
#include <stdexcept>
#include <string_view>

#include "paths.hh"

namespace latite::core_utils::log {

std::filesystem::path const& get_logs_dir();
std::filesystem::path const& get_session_file();

enum class Level {
    Error,
    Warn,
    Info,
    Debug,
};

std::string_view to_str(Level level);

class Logger {
  public:
    Logger(Logger const&) = delete;
    Logger& operator=(Logger const&) = delete;

    static Logger& get_logger();

    void log(Level level, std::string_view msg, std::string_view file_context);

  private:
    std::ofstream session_stream;

    Logger();
    ~Logger();
};

} // namespace latite::core_utils::log
