#include <iostream>
#include "ConsoleLogger.hpp"
#include "TimeDecoratorLogger.hpp"

using namespace YGV;

class FileLogger : public Logger{
// Do you want to implement this? :).
// The easy way to do this is to use the fstream library.
};


int main(){
    std::string content = "This is a test log.";
    Logger* consoleLogger = new ConsoleLogger();
    consoleLogger->to_log(content);

    Logger* decorator = new TimeDecoratorLogger(new ConsoleLogger());
    decorator->to_log(content);

    Logger* decoratorUseOtherLogger = new TimeDecoratorLogger(consoleLogger);
    decoratorUseOtherLogger->to_log(content);

    return 0;
}