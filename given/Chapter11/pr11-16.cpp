// This program demonstrates the use of function objects
// with the sort and remove_if functions.
#include "predicates.h"
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int arr[]{ 12, 25, 36, 8, 11,  15, 89, 32, 71 };
    vector<int> vec{ 12, 25, 36, 8, 11,  15, 89, 32, 71 };

    // Display array and vector in their original form
    cout << "Original form of both array and vector:\n" ;
    for (int e : arr) { cout << e << " "; }

    // Sort the array
    sort(begin(arr), end(arr), LessThan());

    // Print the sorted array
    cout << "\nHere is the sorted array:\n ";
    for (int e : arr) { cout << e << " "; }

    // Call remove_if for even values
    auto start_removed = remove_if(begin(vec), end(vec), IsEven());
    cout << "\nHere is the vector after call to remove_if:\n";
    for (int e : vec) { cout << e << " "; }

    // Erase the remove_if'd elements
    vec.erase(start_removed, end(vec));
    cout << "\nHere is the vector after call to erase:\n";
    for (int e : vec) { cout << e << " "; }     

    cout << endl;

    return 0;
}