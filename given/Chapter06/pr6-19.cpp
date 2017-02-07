// This program demonstrates how a local variable or constant
// can shadow the name of a global variable or constant.
#include <iostream>
using namespace std;

void california();       // Function prototype      
   
const int BIRDS = 500;   // Global constant

int main()
{
   cout << "In main there are " << BIRDS << " birds.\n";
   california();
   return 0;
}

/*******************************
 *          california         *
 *******************************/
void california()
{
   const int BIRDS = 10000;
	
	cout << "In california there are " << BIRDS << " birds.\n";
}
