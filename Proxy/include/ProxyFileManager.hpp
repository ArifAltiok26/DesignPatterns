#pragma once
#include "IFileManager.hpp"
namespace YGV{
    class ProxyFileManager : public IFileManager{
        IFileManager* fileManager;
    public:
        ProxyFileManager(IFileManager* fileManager);
        std::string read(const char* path,size_t size)const;
    };
}