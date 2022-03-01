#include "ProxyFileManager.hpp"
#include "SessionManager.hpp"
namespace YGV{
    ProxyFileManager::ProxyFileManager(IFileManager* fileManager) : fileManager(fileManager){ }
    std::string ProxyFileManager::read(const char* path,size_t size)const{
        // If the session has not started, we are protecting the file manager.
        if(SessionManager::getInstance()->is_init_session())
            return fileManager->read(path,size);
        throw std::exception("Error: Session is not started");
    }
}