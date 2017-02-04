// This program demonstrates the recursive member 
// functions of the NumberList2 class.
#include "NumberList2.h"

int main() 
{
    NumberList2 list;
    double number;
    list.add(23);
    list.add(17);
    list.add(59);
    cout << "The members of the list are: ";
    list.displayList();
    cout << "\n";
    cout << "Enter a number to add: ";
    cin >> number;
    list.add(number);
    cout << "The members of the list are: ";
    list.displayList();
    cout << "\n";
    cout << "Enter a number to remove: ";
    cin >> number;
    list.remove(number);
    cout << "The members of the list are: ";
    list.displayList();
    cout << "\n";
    return 0;
}