#pragma once
#include <string>
namespace YGV{
    struct Logger{
        virtual void to_log(const std::string& content)=0;
    };
}
