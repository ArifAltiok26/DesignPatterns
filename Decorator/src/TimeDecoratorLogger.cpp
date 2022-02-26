#include "TimeDecoratorLogger.hpp"
#include <iomanip>
#include <sstream>
namespace YGV{
    TimeDecoratorLogger::TimeDecoratorLogger(
        Logger* logger, 
        const std::string& format
    ) : 
        DecoratorLogger(logger),
        format(format)
    {    }

    void TimeDecoratorLogger::to_log(const std::string& content){
        std::time_t time_point = clock::to_time_t(clock::now());
        std::ostringstream oss;
        oss << std::put_time(std::gmtime(&time_point),format.c_str());
        logger->to_log(oss.str() + " | " + "I am time decorator");
    }          
}