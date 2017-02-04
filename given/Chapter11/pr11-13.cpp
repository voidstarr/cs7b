// This program demonstrates the array subscript []
// operator for the Trans class.
#include <cstdlib>
#include <iostream>
#include "trans.h"
using namespace std;

int main(int argc, char** argv)
{    
    Trans trans;
    cout << "seven :" << trans["seven"] << endl;
    cout << "three :" << trans["three"] << endl;
    
    return 0;
}