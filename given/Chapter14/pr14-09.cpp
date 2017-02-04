// This program displays a solution to the towers of  
// Hanoi game.
#include <iostream>
#include <string>
using namespace std;

// Function prototype
void moveDisks(int, string, string, string);

int main()
{
   // Play the game with 3 disks
   moveDisks(3, "peg 1", "peg 3", "peg 2");
   cout << "All the disks have been moved!";
   return 0;
}

//***************************************************
// The moveDisks function displays disk moves used  *
// to solve the Towers of Hanoi game.               *
// The parameters are:                              *
//    n      : The number of disks to move.         *
//    source : The peg to move from.                * 
//    dest   : The peg to move to.                  *
//    temp   : The temporary peg.                   *
//***************************************************
 void 
 moveDisks(int n, string source, string dest, string temp)
  {
     if (n > 0)
     {
	  // Move n - 1 disks from source to temp 
        // using dest as the temporary peg
        moveDisks(n - 1, source, temp, dest);
		  
        // Move a disk from source to dest
        cout << "Move a disk from " << source
             << " to " << dest << endl;
		 
        // Move n - 1 disks from temp to dest
        // using source as the temporary peg
        moveDisks(n - 1, temp, dest, source);
     }
  }