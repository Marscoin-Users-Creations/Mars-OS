#include "threading.hpp"

namespace _THREADING_ {
    
    int start() {
        
        create_thread();
        create_thread();
        
    };
    
    int threads = [];
    int create_thread(int work_to_do) {
        
        threads.append("['" +work_to_do +"']")
        
    };
    int start_work(int work_to_do, int priority) {
        
        thread[nextThreadToWork["works"]].append(work_to_do);
        
    };
    
}
