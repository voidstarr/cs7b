// This program demonstrates the use of Windows functions 
// for positioning the cursor. It displays a series of nested
// boxes near the center of the screen. 
#include <iostream>      
#include <windows.h>    // Needed to set cursor positions & call Sleep
using namespace std;

void placeCursor(HANDLE, int, int);   // Function prototypes
void printStars(int);

int main()
{
    const int midRow = 12,
              midCol = 40,
			  numBoxes = 3;
	int width, startRow, endRow;
	
	// Get the handle to standard output device (the console)
    HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
	
	// Each loop prints one box
	for (int box = 1, height = 1; box <= numBoxes; box++, height+=2)  
	{	startRow = midRow - box;
		endRow = midRow + box;
		width = box*5 + (box+1)%2;  // Adds 1 if box*5 is an even number
			
		// Draw box top
		placeCursor(screen, startRow, midCol-width/2);    
		printStars(width);
		
		// Print box sides
		for (int sideRow = 1; sideRow <= height; sideRow++)
		{	placeCursor(screen, startRow + sideRow, midCol-width/2); 
			cout << '*' << endl;
			placeCursor(screen, startRow + sideRow, midCol+width/2);
			cout << '*' << endl;
		}
		// Draw box bottom
		placeCursor(screen, endRow, midCol-width/2);    
		printStars(width);
	
		Sleep(750);   // Pause 3/4 second between boxes displayed
	}
	
    placeCursor(screen, 20, 0);   // Move cursor out of the way   
	return 0;
}

/******************************************************
 *                      placeCursor                   *
 ******************************************************/
void placeCursor(HANDLE screen, int row, int col)
{                       // COORD is a defined C++ structure that  
    COORD position;     // holds a pair of X and Y coordinates
	position.Y = row;       
	position.X = col;    
    SetConsoleCursorPosition(screen, position);
}

/******************************************************
 *                      printStars                    *
 ******************************************************/
void printStars(int numStars)
{
	for (int star = 1; star <= numStars; star++)
		cout << '*';
	cout << endl;
}
