#include <ctime>
//get the system time (unix)
#include <iostream>
using namespace std;

int main()
{
const long double sysTime = time(0);
const long double sysTimeMS = sysTime*1000;

cout << "System Time in milliseconds is " << sysTimeMS << "." << endl;
}
