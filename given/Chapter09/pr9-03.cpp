// This program searches an array of Inventory objects to get
// the price of a particular object. It demonstrates how to 
// perform a linear search using an array of objects. 
#include <iostream>
#include <string>
using namespace std;
 
// Inventory class declaration
class Inventory
{   private:
      string itemCode;
      string description;
      double price;
      
    public:
      Inventory()                             // Default constructor
      {  itemCode = "XXX";  description = " ";  price = 0.0; }
      
      Inventory(string c, string d, double p) // 3 argument constructor
      {  itemCode = c;
         description = d;
         price = p;
      }
      
      // Add methods setCode, setDescription, and setPrice here.
   
      // Get functions to retrieve member variable values
      string getCode() const
      {  string code = itemCode;
         return code;
      }
      
      string getDescription() const
      {  string d = description; 
         return d;
      }
      
      double getPrice() const
      {  return price;
      }
      
}; // End Inventory class declaration

// Program that uses the Inventory class

// Function prototype
int search(const Inventory[], int , string);

/*******************************************************
 *                      main                           *
 *******************************************************/
int main()
{
   const int SIZE = 6;
   
   // Create and initialize the array of Inventory objects
   Inventory silverware[SIZE] =
                             { Inventory("S15", "soup spoon",  2.35),
                               Inventory("S12", "teaspoon",    2.19),
                               Inventory("F15", "dinner fork", 3.19),
                               Inventory("F09", "salad fork" , 2.25),
                               Inventory("K33", "knife",       2.35), 
                               Inventory("K41", "steak knife", 4.15) };
                       
   string desiredCode;     // The itemCode to search for
   int pos;                // Position of desired object in the array
   char doAgain;           // Look up another price (Y/N)?
   
   do
   {   // Get the itemCode to search for
       cout << "\nEnter an item code: ";
       cin  >> desiredCode;
       
       // Search for the object
       pos = search(silverware, SIZE, desiredCode);
       
       // If pos = -1, the code was not found
       if (pos == -1)
          cout << "That code does not exist in the array\n";
       else
       {  // The object was found, so use pos to get the
          // description and price
          cout << "This "    << silverware[pos].getDescription()
               << " costs $" << silverware[pos].getPrice() << endl;
       }
   
       // Does the user want to look up another price?
       cout << "\nLook up another price (Y/N)? ";
       cin  >> doAgain;
       
   } while (doAgain == 'Y' || doAgain == 'y');
   return 0;
} // End main 
   
/**********************************************************
 *                         search                         *
 * This function performs a linear search on an array of  *
 * Inventory objects, using itemCode as the key field.    *
 * If the desired code is found, its array subscript is   *
 * returned. Otherwise, -1 is returned.                   *
 **********************************************************/
int search(const Inventory object[], int size, string value)
{
   int index = 0;         // Used as a subscript to search array 
   int position = -1;     // Used to record position of search value 
   bool found = false;    // Flag to indicate if the value was found 

   while (index < size && !found)
   {
      if (object[index].getCode() == value) // If the value is found
      {
         found = true;          // Set the flag 
         position = index;      // Record the value's subscript 
      }
      index++;                  // Go to the next element 
   }
   return position;             // Return the position, or -1 
} // End search 
