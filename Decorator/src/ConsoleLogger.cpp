#include "ConsoleLogger.hpp"
#include <iostream>
namespace YGV{
    void ConsoleLogger::to_log(const std::string& content){
        std::cout << content << std::endl;
    }
}