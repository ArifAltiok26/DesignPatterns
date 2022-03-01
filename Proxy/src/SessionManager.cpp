#include "SessionManager.hpp"
namespace YGV{
    SessionManager* SessionManager::getInstance(){
        static SessionManager* instance;
        if(instance == nullptr)
            instance = new SessionManager();
        return instance;
    }

    void SessionManager::init(){
        is_init = true;
    }

    bool SessionManager::is_init_session()const{
        return is_init;
    }
}