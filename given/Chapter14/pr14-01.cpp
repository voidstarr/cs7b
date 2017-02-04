// This program demonstrates a simple recursive function.  
#include <iostream>
using namespace std;

// Function prototype
void message(int);

int main() 
{
    message(3);
    return 0;
}

//***********************************************************
// Definition of function message. If the value in times is *
// greater than 0, the message is displayed and the         *
// function is recursively called with the argument         *
// times - 1.                                               *
//***********************************************************
void message(int times) 
{
    if (times > 0) 
    {
        cout << "Message " << times << "\n";
        message(times - 1);
    }
}