#include "log.hh"

#include <chrono>
#include <filesystem>
#include <fstream>
#include <stdexcept>
#include <string_view>

#include "paths.hh"

namespace latite::core_utils {

std::filesystem::path const& log::get_logs_dir() {
    static auto const LOGS_DIR = paths::get_client_dir() / "logs";
    return LOGS_DIR;
}

std::filesystem::path const& log::get_session_file() {
    static auto const SESSION_FILE = log::get_logs_dir() / "latest.log";
    return SESSION_FILE;
}

std::string_view log::to_str(log::Level level) {
    switch (level) {
        case log::Level::Error:
            return "ERROR";
        case log::Level::Warn:
            return "WARN";
        case log::Level::Info:
            return "INFO";
        case log::Level::Debug:
            return "DEBUG";
        default:
            return "UNKNOWN";
    }
}

log::Logger& log::Logger::get_logger() {
    static auto GLOBAL_LOGGER = Logger();
    return GLOBAL_LOGGER;
}

void log::Logger::log(
    Level level,
    std::string_view msg,
    std::string_view file_context
) {
    using time = std::chrono::system_clock;
    auto const now = std::chrono::local_time(time::now());

    auto const formatted_time = std::chrono::local_time_format(now);

    session_stream << '[' << formatted_time << ' ' << to_str(level) << ' '
                   << file_context << ']' << " - " << msg << std::endl;
};

log::Logger::Logger() {
    auto const& logs_dir = log::get_logs_dir();

    if (!std::filesystem::exists(logs_dir)
        && !std::filesystem::create_directories(logs_dir))
        throw std::runtime_error("failed to create logs dir");

    session_stream.open(log::get_session_file());

    if (session_stream.fail())
        throw std::runtime_error("failed to open logs file");

    session_stream.clear();
}

log::Logger::~Logger() {
    if (session_stream.is_open()) {
        session_stream.close();
    }
}

} // namespace latite::core_utils
