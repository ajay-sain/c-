#include <iostream>

#include "Logger.h"

Logger::Logger(){
    this->m_LoggingLevel = LogLevelWarning;
}

Logger::Logger(LoggingLevel logingLevel){
    this->m_LoggingLevel = logingLevel;
}
void Logger::Info(const char* message){
    if(this->m_LoggingLevel >= LogLevelInfo)
        std::cout << "[Info]: " << message << std::endl;
}

void Logger::Warning(const char* message){
    if(this->m_LoggingLevel >= LogLevelWarning)
        std::cout << "[Warning]: " << message << std::endl;
}

void Logger::Error(const char* message){
    if(this->m_LoggingLevel >= LogLevelError)
        std::cout << "[Error]: " << message << std::endl;
}

Logger Logger::GetLogger(){
    static Logger logger;
    return logger;
}

Logger Logger::GetLoggerWithLevel(LoggingLevel logingLevel){
    static Logger logger(logingLevel);
    return logger;
}