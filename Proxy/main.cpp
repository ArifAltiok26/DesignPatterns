#include <iostream>
#include <exception>
#include "FileManagerAPI.hpp"
#include "SessionManager.hpp"
using namespace YGV;

int main(){
    /*
    // First example. We get an error.I 
    IFileManager* fm = create_file_manager();
    try{
        std::cout << fm->read("test.txt",10) << std::endl;
    }catch(std::exception& ex){
        std::cout << ex.what();
    }
    */
    
    // Second example. Life is good :). 
    SessionManager::getInstance()->init();
    IFileManager* fm = create_file_manager();
    try{
        std::cout << fm->read("test.txt",10) << std::endl;
    }catch(std::exception& ex){
        std::cout << ex.what();
    }
    

    return 0;
}