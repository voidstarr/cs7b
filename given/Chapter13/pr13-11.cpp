//This program uses the write and read functions. 
#include <iostream> 
#include <fstream>
using namespace std;

int main() 
{
    // File object used to access file
    fstream file("nums.dat", ios::out | ios::binary);
    if (!file) 
    {
        cout << "Error opening file.";
        return 0;
    }

    // Integer data to write to binary file
    int buffer[ ] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(buffer) / sizeof(buffer[0]);

    // Write the data and close the file
    cout << "Now writing the data to the file.\n";
    file.write(reinterpret_cast<char *>(buffer), sizeof(buffer));
    file.close();

    // Open the file and use a binary read to read
    // contents of the file into an array
    file.open("nums.dat", ios::in);
    if (!file) 
    {
        cout << "Error opening file.";
        return 0;
    }

    cout << "Now reading the data back into memory.\n";
    file.read(reinterpret_cast<char *>(buffer), sizeof(buffer));

    // Write out the array entries
    for (int count = 0; count < size; count++)
        cout << buffer[count] << " ";

    // Close the file	
    file.close();
    return 0;
}