#include "FileManagerAPI.hpp"
#include "FileManager.hpp"
#include "ProxyFileManager.hpp"
namespace YGV{
    IFileManager* create_file_manager(){
        return new ProxyFileManager(new FileManager);
    }
}