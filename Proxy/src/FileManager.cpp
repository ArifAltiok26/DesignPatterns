#include "FileManager.hpp"
#include <fstream>
namespace YGV{
    std::string FileManager::read(const char* path,size_t size)const{
        std::fstream file(path,std::fstream::in);
        std::string buffer;
        std::getline(file,buffer,'\0');
        return buffer;
    }
}