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
        _GUI_.start(_File_System_.userFile["name"], _File_System_.userFile["defaultBackground"], _File_System_.userFile["defaultOsTheme"]);
        _THREADING_.threads.start(_Core_.workToDo);
        _USER_.start(_File_System_.userFile["name"], _File_System_.userFile["password"], _File_System_.userFile["fingerprints"]);
        
    };
    
}
