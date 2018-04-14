#include <thread>
#include <algorithm>
#include<iostream>
using namespace std;

class WorkerThread
{
public:
    void operator()()     
    {
        std::cout<<" Worker Thread "<<std::this_thread::get_id()<<" is Executing"<<std::endl;
    }
};
int main()  
{
    /*std::thread threadObj( (WorkerThread()) );
    threadObj.join();
    threadObj.join(); // It will cause Program to Terminate  
     */

    std::thread threadObj( (WorkerThread()) );
    threadObj.detach();
    threadObj.detach(); // It will cause Program to Terminate
  
  return 0;
}
