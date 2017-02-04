// This program writes the ABCs in green, red, and yellow.
#include <iostream>       
#include <windows.h>    // Needed to display colors and call Sleep
using namespace std;

int main()
{
	// Bright Green = 10   Bright Red = 12   Bright Yellow = 14   
	
	// Get the handle to standard output device (the console)
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
	
    // Write the ABCs using 3 colors
	int color = 10;     // Staring color = green
	for (char letter = 'A'; letter <= 'Z'; letter++)
	{
		SetConsoleTextAttribute (screen, color); // Set the color
		cout << letter <<  endl;                 // Print the letter
		
		color +=2;                               // Choose next color
		if (color > 14)
			color = 10;
		
		Sleep(280);  // Pause between characters to watch them appear
	}
 	// Restore normal text attribute (i.e. white)
	SetConsoleTextAttribute(screen, 7);
	return 0;
}
