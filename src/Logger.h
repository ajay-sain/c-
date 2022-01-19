#pragma one

// Including the system header files 
#include <iostream>

enum LoggingLevel{
    LogLevelError,
    LogLevelWarning,
    LogLevelInfo
};

class Logger{
    private: 
        LoggingLevel m_LoggingLevel;
        Logger();
        Logger(LoggingLevel);

    public: 
        void Error(const char*);

        void Warning(const char*);

        void Info(const char*);

        static Logger GetLogger();

        static Logger GetLoggerWithLevel(LoggingLevel LoggingLevel);
};