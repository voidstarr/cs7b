// This program tests for file open errors.
#include <iostream>
#include <fstream>        // Needed to use files
using namespace std;

int main()
{
   ifstream inputFile;
   int number;

   // Attempt to open the input file
   inputFile.open("ListOfNumbers.txt");

   // If the file successfully opened, process it
   if (inputFile)
   {
      // Read the numbers from the file and display them
      while (inputFile  >> number)
         cout << number << endl;

      // Close the file
      inputFile.close();
   }
   else // The file could not be found and opened
   {
      // Display an error message
      cout << "Error opening the file.\n";
   }
   return 0;
}
