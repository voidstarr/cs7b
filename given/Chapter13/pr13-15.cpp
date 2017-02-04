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

// Function Prototypes
long byteNum(int);
void showRec(Info);

int main() 
{
    // Person information
    Info person;

    // Create file object and open the file
    fstream people("people.dat", ios::in | ios::binary);
    if (!people) 
    {
        cout << "Error opening file. Program aborting.\n";
        return 0;
    }

    // Skip forward and read record 1 in the file
    cout << "Here is record 1:\n";
    people.seekg(byteNum(1), ios::beg);
    people.read(reinterpret_cast<char *>(&person), sizeof (person));
    showRec(person);

    // Skip backwards and read record 0 in the file
    cout << "\nHere is record 0:\n";
    people.seekg(byteNum(0), ios::beg);
    people.read(reinterpret_cast<char *>(&person), sizeof (person));
    showRec(person);

    // Close the file
    people.close();
    return 0;
}

//************************************************************
// Definition of function byteNum. Accepts an integer as     *
// its argument. Returns the byte number in the file of the  *
// record whose number is passed as the argument.            *
//************************************************************
long byteNum(int recNum) 
{
    return sizeof (Info) * recNum;
}

//************************************************************
// Definition of function showRec. Accepts an Info structure *
// as its argument, and displays the structure's contents.   *
//************************************************************
void showRec(Info record) 
{
    cout << "Name: ";
    cout << record.name << endl;
    cout << "Age: ";
    cout << record.age << endl;
    cout << "Address line 1: ";
    cout << record.address1 << endl;
    cout << "Address line 2: ";
    cout << record.address2 << endl;
    cout << "Phone: ";
    cout << record.phone << endl;
}