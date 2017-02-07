//This program demonstrates the use of a structure variable to 
//store a record of information to a file. 
#include <iostream>
#include <fstream>
#include <cstring>
#include <cctype>  // for toupper
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

int main() {
    Info person;   // Store information about a person
    char response; // User response
	
	string input;  // Used to read strings

    // Create file object and open file
    fstream people("people.dat", ios::out | ios::binary);
    if (!people) 
    {
        cout << "Error opening file. Program aborting.\n";
        return 0;
    }

    // Keep getting information from user and writing it
    // to the file in binary mode
    do 
    {
        cout << "Enter person information:\n";
        cout << "Name: ";
        getline(cin, input);
        strcpy(person.name, input.c_str());        
        cout << "Age: ";
        cin >> person.age;
        cin.ignore(); // Skip over remaining newline
        cout << "Address line 1: ";
        getline(cin, input);
        strcpy(person.address1, input.c_str());
        cout << "Address line 2: ";
        getline(cin, input);
        strcpy(person.address2, input.c_str());
        cout << "Phone: ";
        getline(cin, input);
        strcpy(person.phone, input.c_str());
        people.write(reinterpret_cast<char *>(&person), 
                     sizeof(person));
        cout << "Do you want to enter another record? ";
        cin >> response;
        cin.ignore();
    } while (toupper(response) == 'Y');

    // Close file
    people.close();
    return 0;
}