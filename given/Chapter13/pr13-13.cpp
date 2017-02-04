// This program demonstrates the use of a structure
// variable to read a record of information from a file.  
#include <iostream>
#include <fstream>
using namespace std;

const int NAME_SIZE = 51, ADDR_SIZE = 51, PHONE_SIZE = 14;
struct Info
{
    char name[NAME_SIZE];
    int age;
    char address1[ADDR_SIZE];
    char address2[ADDR_SIZE];
    char phone[PHONE_SIZE];
};

int main()
{
    Info person; // Store person information
    char response; // User response 

    // Create file object and open file for binary reading
    fstream people("people.dat", ios::in | ios::binary);
    if (!people)
    {
        cout << "Error opening file. Program aborting.\n";
        return 0;
    }

    // Label the output
    cout << "Here are the people in the file:\n\n";

    // Read one structure at a time and echo to screen
    people.read(reinterpret_cast<char *>(&person), 
	            sizeof (person));
    while (!people.eof())
    {
        cout << "Name: ";
        cout << person.name << endl;
        cout << "Age: ";
        cout << person.age << endl;
        cout << "Address line 1: ";
        cout << person.address1 << endl;
        cout << "Address line 2: ";
        cout << person.address2 << endl;
        cout << "Phone: ";
        cout << person.phone << endl;
        cout << "\nStrike any key to see the next record.\n";
        cin.get(response);
        people.read(reinterpret_cast<char *>(&person), 
		            sizeof(person));
    }
    cout << "That's all the information in the file!\n";
    people.close();
    return 0;
}