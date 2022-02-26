#pragma once
#include "Logger.hpp"

namespace YGV{
    class DecoratorLogger : public Logger{
        protected:
        Logger* logger;
        public:
        DecoratorLogger(Logger* logger) : logger(logger){    }
        
        virtual void to_log(const std::string& content) = 0;
    };
}