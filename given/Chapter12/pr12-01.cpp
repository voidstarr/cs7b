//This program demonstrates that string literals
//are pointers to char
#include <iostream>
using namespace std;

int main()
{
   // Define variables that are pointers to char
   const char *p = nullptr, *q = nullptr;
	
   // Assign string literals to the pointers to char
   p = "Hello ";
   q = "Bailey";

   // Print the pointers as C-strings!
   cout << p << q << endl;
   
   // Print the pointers as C-strings and as addresses
   cout << p  << " is stored at " << int(p) << endl;
   cout << q  << " is stored at " << int(q) << endl;
	
   // A string literal can be treated as a pointer!
   cout << "String literal stored at " << int("literal");
   return 0;
}