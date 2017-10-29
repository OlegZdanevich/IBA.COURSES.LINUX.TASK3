#include "func.h"
#include <thread>

using namespace std;

int main(int argc, char* argv[])
{
thread t1(helloFunc);
t1.join();
thread t2(helloFunc);
t2.join();
thread t3(helloFunc);
t3.join();
thread t4(helloFunc);
t4.join();
thread t5(helloFunc);
t5.join();
thread t6(helloFunc);
t6.join();
thread t7(helloFunc);
t7.join();
thread t8(helloFunc);
t8.join();
thread t9(helloFunc);
t9.join();
thread t10(helloFunc);
t10.join();
return 0;
}