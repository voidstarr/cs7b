// This program demonstrates a recursive function that 
// performs a binary search on an integer array.   
#include <iostream>
using namespace std;

// Function prototype
int binarySearch(const int array[], int first, int last, int value);

const int SIZE = 20;

int main()
{
   int tests[SIZE] = { 101, 142, 147, 189, 199, 207, 222,
                       234, 289, 296, 310, 319, 388, 394,
                       417, 429, 447, 521, 536, 600};
   int result; // Result of the search
   int  empID; // What to search for

   cout << "Enter the Employee ID you wish to search for: ";
   cin >> empID;
   result = binarySearch(tests, 0, SIZE - 1, empID);
   if (result == -1)
      cout << "That number does not exist in the array.\n";
   else
     {
        cout << "That ID is found at element " << result;
        cout << " in the array\n";
     }
   return 0;
}

//**********************************************************
// The binarySearch function performs a recursive binary   *
// search on a range of elements of an integer array. The  *
// parameter first holds the subscript of the range's      *
// starting element, and last holds the subscript of the   *
// ranges's last element. The parameter value holds the    * 
// the search value. If the search value is found, its     *
// array subscript is returned. Otherwise, -1 is returned  *
// indicating the value was not in the array.              *
//**********************************************************
int binarySearch(const int array[], int first, int last, int value)
{
   int middle;	       	// Mid point of search

   if (first > last)    // Base case
	   return -1;
   middle = (first + last)/2;
   if (array[middle]==value)
	   return middle;
   if (array[middle]<value)
      return binarySearch(array, middle+1,last,value);
   else
      return binarySearch(array, first,middle-1,value);
}