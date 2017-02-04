// This program provides a simple demonstration of the
// STL algorithms.  

#include <iostream>
#include <vector>     // Include the vector header
#include <algorithm>  // Required for STL algorithms
using namespace std;

int main()
{  
   vector<int> vect;    // Define a vector object

   // Use push_back to push values into the vector
   for (int x = 0; x < 10; x++)
      vect.push_back(x*x);
	  
   // Display the vector's elements
   cout << "The collection has " << vect.size() 
        << " elements. Here they are:\n";
   for (int x = 0; x < vect.size(); x++)
		cout << vect[x] << " ";
   cout << endl;
   
   // Randomly shuffle the vector's contents
   random_shuffle(vect.begin(), vect.end());
   
   // Display the vector's elements
   cout << "The elements have been shuffled:\n";
   for (int x = 0; x < vect.size(); x++)
      cout << vect[x] << " ";
   cout << endl;
   
   // Now sort them
   sort(vect.begin(), vect.end());	
   
   // Display the vector's elements again
   cout << "The elements have been sorted:\n";
   for (int x = 0; x < vect.size(); x++)
      cout << vect[x] << " ";
   cout << endl;

   // Now search for an element
   int val = 49;
   if (binary_search(vect.begin(), vect.end(), val))
   cout << "The value " << val 
        << " was found in the vector.\n";
   else
    	cout << "The value " << val
           << " was not found in the vector.\n";
   return 0;
}