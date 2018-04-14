#include <thread>
#include<iostream>
using namespace std;
 
void thread_function()
{
    for(int i = 0; i < 10000; i++);
        std::cout<<"\nthread function Executing"<<std::endl;
}
 
int main()  
{
     std::thread threadObj(thread_function);
    for(int i = 0; i < 10000; i++);
        std::cout<<" Display From MainThread "<<std::endl;
    threadObj.join();    
    std::cout<<" Exit of Main function "<<std::endl;
   
  return 0;
}
