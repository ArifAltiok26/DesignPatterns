#pragma once
#include <string>
namespace YGV{
    struct IFileManager{
        virtual std::string read(const char* path,size_t size)const = 0;
        //virtual size_t write(const char* path,char*buffer,size_t size) = 0;
    };
}