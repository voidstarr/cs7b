// This program shows the behavior of the >> operator 
// on files that contain spaces as part of the information.
// The program reads the contents of the file and transfers
// those contents to standard output.
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
   // variables needed to read file  
   fstream file;
   string input;
	
   // Open the file
   file.open("murphy.txt", ios::in);
   if (!file)
   {
      cout << "File open error!" << endl;
      return 0;
   }
	
   // Read the file and echo to screen
   file >> input;
   while (!file.fail())
   {
      cout << input;
      file >> input;
   }
	
   // Close the file
   file.close();
   return 0;
}