// This program allows the user to edit a specific 
// record in the inventory file.
#include <iostream>
#include <fstream>
using namespace std;

const int DESC_SIZE = 31;
// Declaration of Invtry structure

struct Invtry {
    char desc[DESC_SIZE];
    int qty;
    double price;
};

int main() 
{
    // Variables needed to reead the file
    Invtry record;
    long recNum;

    // Open the file
    fstream inventory("invtry.dat", ios::in | ios::out |
            ios::binary);
    if (!inventory) 
    {
        cout << "Error opening file.";
        return 0;
    }

    // Move to the desired record and read it into record
    cout << "Which record do you want to edit?";
    cin >> recNum;
    inventory.seekg(recNum * sizeof (record), ios::beg);
    inventory.read(reinterpret_cast<char *> (&record), sizeof (record));

    // Get new data from user and edit in-memory record						
    cout << "Description: ";
    cout << record.desc << endl;
    cout << "Quantity: ";
    cout << record.qty << endl;
    cout << "Price: ";
    cout << record.price << endl;
    cout << "Enter the new data:\n";
    cout << "Description: ";
    cin.ignore();
    cin.getline(record.desc, DESC_SIZE);
    cout << "Quantity: ";
    cin >> record.qty;
    cout << "Price: ";
    cin >> record.price;

    // Move to the right place in file and write the record
    inventory.seekp(recNum * sizeof (record), ios::beg);
    inventory.write(reinterpret_cast<char *> (&record), sizeof (record));

    // Close the file					 
    inventory.close();
    return 0;
}