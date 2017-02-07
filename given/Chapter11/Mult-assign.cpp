//Mult-assign.cpp
//This program demonstrates the value  
//returning assignment operator function.
//This program is not listed in the book
#include "overload2.h"
#include <iostream>
using namespace std;

int main()
{
   NumberArray first(3, 10.5);
   NumberArray second(5, 20.5);
   NumberArray third(7, 30.5);
   cout << "The data in the three objects is: " << endl;
   cout << "1: "; first.print(); cout << endl;
   cout << "2: "; second.print(); cout << endl;
   cout << "3: "; third.print(); cout << endl;
   cout << "Now assign the third object to all." << endl;
   cout << "The data in the three objects now is" << endl;
   first = second = third;      //Do multiple assignment
   cout << "1: "; first.print(); cout << endl;
   cout << "2: "; second.print(); cout << endl;
   cout << "3: "; third.print(); cout << endl;
   return 0;
}
   
   