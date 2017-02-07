// This program reads data from a file.
#include <iostream>
#include <fstream>         // Needed to use files
#include <string>
using namespace std;
  
int main()
{
    ifstream inputFile;
    string name;
 
    // Open the input file
    inputFile.open("Friends.txt");  

    cout << "Here are the names stored in the Friends.txt file.\n";
   
    for (int count = 1; count <= 3; count++)
	{
		inputFile >> name;      // Read the next name from the file
		cout << name << endl;   // and display it
	}

    inputFile.close();          // Close the file
    return 0;
}
