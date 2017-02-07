// This program illustrates the use of the time function.  
#include <iostream>
#include <ctime>    // Needed to use the time functions and types
using namespace std;  

int main()
{
    time_t epSeconds;
    epSeconds = time(NULL);
    cout << "Number of seconds since the epoch is "
         << epSeconds << endl; 
    return 0;
}