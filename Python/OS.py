using string

using "core/core.py"
using "file_system/file_system.py"
using "gui/gui.py"
using "internet/internet.py"
using "security/security.py"
using "threading/threading.py"
using "user/user.py"

class OS :
    
    def _INIT_() :
        
        _CORE_.start()
        _GUI_.start(_CORE_.create_starting_gif(_FILE_SYSTEM_.user_file["name"], _FILE_SYSTEM_.user_file["defaultBackground"], _FILE_SYSTEM_.user_file["defaultOsTheme"]))
        _THREADING_.start(_CORE_.work_to_do)
        _USER_.start(_FILE_SYSTEM_.user_file["name"], _FILE_SYSTEM_.user_file["password"], _FILE_SYSTEM_.user_file["fingerprints"])
