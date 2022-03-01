#pragma once
namespace YGV{
    //Conditional class for business logic. The condition is session is start.
    class SessionManager{
        bool is_init = false;
        static SessionManager* instance;
    public:
        static SessionManager* getInstance();

        void init();

        bool is_init_session()const;
    };
}