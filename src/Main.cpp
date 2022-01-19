#include <iostream>

#include "Logger.h"
// #define LOG(x) std::out << x << endl;

int main(int argc, char const *argv[])
{
    Logger logger = Logger::GetLogger();
    logger.Error("Hellow");
    logger.Warning("Hellow");
    logger.Info("Hellow");
    return 0;
}
