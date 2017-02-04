// This program demonstrates the copy constructor 
// and assignment operator added to NumberList.
#include "reliablenumberlist.h" 
int main()
{
    ReliableNumberList squareList, cubeList;
    // Store values in the two lists
    for (int k = 1; k <= 5; k++)
    {
        squareList.add(k*k);
        cubeList.add(k*k*k);
    }

    // Use copy constructor to create a third list
    ReliableNumberList otherList(squareList);   
    cout << "Result of the copy constructor is:  ";
    otherList.displayList();
    cout << endl;

    // Use the assignment operator
    otherList = cubeList;
    cout << "Result of assignment is:            ";
    otherList.displayList();
    cout << endl;
    return 0;
}
