#pragma once
#include "DecoratorLogger.hpp"
#include <chrono>
namespace YGV{
    class TimeDecoratorLogger: public DecoratorLogger{
        std::string format;
        using clock = std::chrono::system_clock;
    public:
        TimeDecoratorLogger(
            Logger* logger,
            const std::string& format="%Y-%m-%d %H:%M:%S"
        );

        void to_log(const std::string& content) override;
    };
}