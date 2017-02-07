// This program uses the & operator to determine a  
// variable's address.
#include <iostream> 
using namespace std;

char letter;
short number;
float amount;
double profit;
char ch;
 
int main()
{  
  // Print address of each variable
  // The cast to long makes addresses print in decimal
  // rather than in hexadecimal
  cout << "Address of letter is:  "
       <<  long(&letter) << endl;
  cout << "Address of number is:  " 
       << long(&number) << endl;
  cout << "Address of amount is:  " 
       << long(&amount) << endl;
  cout << "Address of profit is:  "
       << long(&profit) << endl;
  cout << "Address of ch is:      " 
       << long(&ch) << endl;	 
  return 0;
}