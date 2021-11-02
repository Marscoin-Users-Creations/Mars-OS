#include "threading.hpp"

namespace _THREADING_ {
    
    unsigned int next_thread_to_work = 0;
    unsigned int threads = [{}, {}]
    unsigned int threads_work_loads = [];
    
    int start() {
        
        create_thread("nothing");
        create_thread("nothing");
        
    };
    
    int create_thread(int work_to_do) {
        
        if (work_to_do == "nothing") {
            
            threads.append("['works': '" +repeat(1+1) +"']");
            threads_work_loads.append(1);
            
        } else {
            
            threads.append("['works': '" +work_to_do +"']");
            
        };
        
    };
    int start_work(int work_to_do, int priority) {
        
        threads[(next_thread_to_work)["works"]].append(work_to_do);
        
    };
    
}
