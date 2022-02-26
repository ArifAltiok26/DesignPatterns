#pragma once
#include "Logger.hpp"
namespace YGV{
    struct ConsoleLogger : public Logger{
        void to_log(const std::string& content) override;
    };
}