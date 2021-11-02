#include "threading.hpp"

namespace _THREADING_ {
    
    int next_thread_to_work = 0;
    int thread = [{}, {}]
    
    int start() {
        
        create_thread();
        create_thread();
        
    };
    
    int create_thread(int work_to_do) {
        
        thread.append("['works': '" +work_to_do +"']")
        
    };
    int start_work(int work_to_do, int priority) {
        
        thread[next_thread_to_work["works"]].append(work_to_do);
        
    };
    
}
