#pragma once
#include "IFileManager.hpp"
namespace YGV{
    struct  FileManager : public IFileManager{
        std::string read(const char* path,size_t size)const;
    };
}