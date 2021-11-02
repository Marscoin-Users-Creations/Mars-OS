#include "../core/core.cpp"
#include "../file_system/file_system.cpp"
#include "../gui/gui.cpp"
#include "user.hpp"

namespace user {
    
    int user = { "name": "ADMIN", "id": 0, "powers": 0 };
    
    int createUser(int username, int powers) {
        
        _FILE_SYSTEM_.write_file("")
        
    };
    int deleteUser(int username, int userid) {
        
        _FILE_SYSTEM_.write_file("USERS.mosd", "{'filelines': 'all'}", _SECURITY_SYSTEM_.decrypt_datas(_FILE_SYSTEM_.read_file("USERS.mosd"), ""))
        
    };
    
}
