//This program demonstrates reading and writing  
//a file through an fstream object
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
   fstream inOutFile;
   string word;         // Used to read a word from the file
   
   // Open the file
   inOutFile.open("inout.txt");
   if (!inOutFile)
   {
       cout << "The file was not found." << endl;
       return 1;
   }
   
   // Read and print every word already in the file   
   while (inOutFile >> word)
   {
       cout << word << endl;
   }
   
   // Clear end of file flag to allow additional file operations
   inOutFile.clear();
   
   // Write a word to the file and close the file
   inOutFile << "Hello" << endl;
   inOutFile.close();    
    
   return 0;
}