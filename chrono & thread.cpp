 //this_thread::sleep_for example
#include <iostream>       // std::cout, std::endl
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
using namespace std;
int main()
{
   cout << "countdown:\n";
  for (int i=10; i>0; --i) {
    cout << i <<endl;
   this_thread::sleep_for (chrono::seconds(1));
  }
cout << "Lift off!\n";

  return 0;
}
