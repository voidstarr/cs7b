// This program writes the ABCs in green, red, and yellow,
// displaying them diagonally across the screen so they
// appear to be climbing down a staircase.
#include <iostream> 
#include <windows.h>    // Needed to display colors and call Sleep
using namespace std;

// Prototype
void printSpaces(int n);

int main()
{
	// Bright Green = 10   Bright Red = 12   Bright Yellow = 14   
	
	// Get the handle to standard output device (the console)
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
	
    // Write the ABCs using 3 colors
	// Display 2 per line, stair stepping across the screen
	int color = 10;     // Starting color = green
	for (char letter = 'A'; letter <= 'Z'; letter+=2)
	{
		SetConsoleTextAttribute (screen, color);    // Set the color
		printSpaces(letter-'A');                    // Indent
		cout << letter                              // Print 2 letters
		     << static_cast<char>(letter+1) << endl;
		color +=2;                                  // Choose next color
		if (color > 14)
			color = 10;
		
		Sleep(280);  // Pause between characters to watch them appear
	}
 	// Restore normal text attribute (i.e. white)
	SetConsoleTextAttribute(screen, 7);
	return 0;
}

/********************************************
 *                printSpaces               *
 * Prints n spaces where n is passed as an  *
 * argument to the function.                *
 ********************************************/
void printSpaces(int n)
{
   for (int space = 1; space <= n; space++)
      cout << " "; 
}
