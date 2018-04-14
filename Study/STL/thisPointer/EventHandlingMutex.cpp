#include<thread>
#include<mutex>
#include<iostream>

/*
 * Make a Boolean global variable with default value false. 
 * Set its value to true in Thread 2 and Thread 1 will keep 
   on checking its value in loop and as soon as it becomes 
   true Thread 1 will continue with processing of data. But 
   as it’s a global variable shared by both of the Threads 
   it needs synchronization with mutex. Let’s see its code,
 */
 
class Application
{
 std::mutex m_mutex;
 bool m_bDataLoaded;
public:
 Application()
 {
 m_bDataLoaded = false;
 }
 void loadData()
 {
 // Make This Thread sleep for 1 Second
 std::this_thread::sleep_for(std::chrono::milliseconds(1000));
 std::cout<<"Loading Data from XML"<<std::endl;
 
 // Lock The Data structure
 std::lock_guard<std::mutex> guard(m_mutex);
 
 // Set the flag to true, means data is loaded
 m_bDataLoaded = true;
 
 }
 void mainTask()
 {
 std::cout<<"Do Some Handshaking"<<std::endl;
 
 // Acquire the Lock
 m_mutex.lock();
 // Check if flag is set to true or not
 while(m_bDataLoaded != true)
 {
  // Release the lock
  m_mutex.unlock();
  //sleep for 100 milli seconds
  std::this_thread::sleep_for(std::chrono::milliseconds(100));
  // Acquire the lock
  m_mutex.lock();
  }
  // Release the lock
  m_mutex.unlock();
  //Doc processing on loaded Data
  std::cout<<"Do Processing On loaded Data"<<std::endl;
 }
};
 
/*
It has following disadvantages,

Thread will keep on acquiring the lock and release it just to check the value, therefore it will consume CPU cycles and will also make Thread 1 slow, because it needs to acquire same lock to update the bool flag.

So obviously we need a better mechanism to achieve this, like if somehow Thread 1 could just block by waiting for an Event to get signaled and another Thread could signal that Event and make Thread 1 continue. It would have save many CPU cycles and gave better performance. But the question is how to achieve this? : Condition Variable
*/
int main()
{
  Application app;
 
  std::thread thread_1(&Application::mainTask, &app);
  std::thread thread_2(&Application::loadData, &app);
 
  thread_2.join();
  thread_1.join();
  return 0;
}
