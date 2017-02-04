// This program demonstrates the remove member function. 
#include "NumberList.h"
using namespace std;

int main()
{
    NumberList list;

    // Build the list
    list.add(2.5);
    list.add(7.9);
    list.add(12.6);

    // Display the list
    cout << "Here are the initial values:\n";
    list.displayList();
    cout << "\n\n";

    // Demonstrate the remove function
    cout << "Now removing the value in the middle.\n";
    list.remove(7.9);
    cout << "Here are the values left.\n";
    list.displayList();
    cout << "\n\n";

    cout << "Now removing the last value.\n";
    list.remove(12.6);
    cout << "Here are the values left.\n";
    list.displayList();
    cout << "\n\n";

    cout << "Now removing the only remaining value.\n";
    list.remove(2.5);
    cout << "Here are the values left.\n";
    list.displayList();
    cout << endl;
    
    return 0;
}