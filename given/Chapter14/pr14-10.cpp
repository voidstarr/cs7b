// This program demonstrates a recursive function that finds
// and counts all possible combinations of coin values to  
// make a specified amount of change. 

#include <iostream>
using namespace std;

const int COIN_SET_SIZE = 6;
const int coinValues[ ] = {1, 5, 10, 25, 50, 100};

//***********************************************************
// This function returns the number of ways to make change  *
// for an amount if we can only use coinValues in the array *
// positions 0 through largestIndex                         *
//***********************************************************

int mkChange(int amount, int largestIndex)
{  
   // Don’t use coin values bigger than amount
   while(coinValues[largestIndex] > amount)      
      largestIndex--;  
  
   if (amount == 0 || largestIndex == 0)	
      return 1;
	  
   // Number of ways to make change for amount
   int nWays = 0; 
   // Number of coins of largest index to use   
   int nCoins = 0 ;
	
   while (nCoins <= amount/coinValues[largestIndex])  
   {	       		
      int amountLeft;  
      amountLeft = amount - nCoins * coinValues[largestIndex]; 
		
      // Add the number of ways to make change with nCoins
      // of the largest index     
      nWays = nWays + mkChange(amountLeft, largestIndex-1);
		
      nCoins++;
   }
   return nWays;
}

int main( )
{  
  // Display possible coin values
  cout << "Here are the valid coin values, in cents: ";
  for (int index = 0; index < COIN_SET_SIZE; index ++)
     cout << coinValues[index] << " ";
  cout << endl;
  
  // Get input from user
  int amount;
  cout << "Enter the amount of cents to make change for: ";
  cin  >> amount;
  
  // Compute and display number of ways to make change
  cout << "Number of possible combinations is "
       << mkChange(amount, COIN_SET_SIZE-1)  
       << endl;                               
  return 0; 
}