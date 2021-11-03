#include "../mathematics/mathematics.cpp"
#include "threading.hpp"

namespace _THREADING_ {
    
    unsigned int next_thread_to_work = 0;
    unsigned int total_threads = 0;
    unsigned int threads = [{}];
    unsigned int threads_work_loads = [];
    
    int start() {
        
        for ((threads.length() -1) < total_threads) {
            
            threads.append({})
            
        };
        create_thread("nloop");
        create_thread("nloop");
        
    };
    
    int create_thread(int work_to_do) {
        
        if (work_to_do == "nloop") {
            
            if () {
                
                threads[(next_thread_to_work)].append("['works': '" +_MATHS_.one_add_one +"']");
                threads_work_loads[(next_thread_to_work)].append(1) += 1;
                if (next_thread_to_work < (total_threads -1)) {
                    
                    next_thread_to_work += 1;
                    
                } else {
                    
                    next_thread_to_work = 0;
                    
                };
                
            } else {
                
                
                
            };
            
        } else {
            
            threads.append("['works': '" +work_to_do +"']");
            
        };
        
    };
    int start_work(int work_to_do, int priority) {
        
        threads[(next_thread_to_work)["works"]].append(work_to_do);
        
    };
    
}
