#include <std>
#include <string>


#include "core/core.cpp"
#include "file_system/file_system.cpp"
#include "gui/gui.cpp"
#include "internet/internet.cpp"
#include "security/security.cpp"
#include "threading/threading.cpp"
#include "user/user.cpp"


namespace OS {
    
    int _INIT_() {
        
        _CORE_.start();
        _GUI_.start(_CORE_.create_starting_gif(_File_System_.user_file["name"], _File_System_.user_file["defaultBackground"], _File_System_.user_file["defaultOsTheme"]));
        _THREADING_.start(_Core_.work_to_do);
        _USER_.start(_File_System_.user_file["name"], _File_System_.user_file["password"], _File_System_.user_file["fingerprints"]);
        
    };
    
}
