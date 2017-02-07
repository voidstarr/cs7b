// This program finds the probability of winning a "mini" lottery when
// the user's set of numbers must exactly match the set drawn by the
// lottery organizers. In addition to main, it uses three functions.
#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void getLotteryInfo(int&, int&);
long int computeWays(int, int);
long int factorial(int);

int main()
{
	int pickFrom,         // The number of numbers to pick from
        numPicks;         // The number of numbers to select
   long int ways;         // The number of different possible
                          // ways to pick the set of numbers
       
   cout << "This program will tell you your probability of "
        << "winning \"Little Lotto\". \n";
   getLotteryInfo(pickFrom, numPicks);
   ways = computeWays(pickFrom, numPicks);

   cout << fixed << showpoint << setprecision(4);
   cout << "\nYour chance of winning the lottery is "
        << "1 chance in " << ways << ".\n";
   cout << "This is a probability of " << (1.0 / ways)    << "\n"; 
   return 0;
}

/*******************************************************************
 *                        getLotteryInfo                           *
 * Gets and validates lottery info. from the user and places it in *
 * reference parameters referencing variables in the main function.*
 *******************************************************************/
void getLotteryInfo(int &pickFrom, int &numPicks)
{
   cout << "\nHow many numbers (1-12) are there to pick from? ";
   cin  >> pickFrom;
   while (pickFrom < 1 || pickFrom > 12)
   {  
      cout << "There must be between 1 and 12 numbers.\n"
           << "How many numbers (1-12) are there to pick from? ";
      cin  >> pickFrom;
   }
   cout << "How many numbers must you pick to play? ";
   cin  >> numPicks;
   while (numPicks < 1 || numPicks > pickFrom)
   {  
      if (numPicks < 1)                         // too few picks
         cout << "You must pick at least one number.\n"; 
      else                                      // too many picks
         cout << "You must pick " << pickFrom << " or fewer numbers.\n";

      cout << "How many numbers must you pick to play? ";
      cin  >> numPicks;    
   }
}

/*******************************************************************
 *                            computeWays                          *
 *    Computes and returns the number of different possible sets   *
 *    of k numbers that can be chosen from a set of n numbers.     *
 *    The formula for this is   n!                                 *
 *                           --------                              *
 *                           k!(n-k)!                              *
 *******************************************************************/
// Note that the computation is done in a way that does not require
// multiplying two factorials together. This is done to prevent any
// intermediate result becoming so large that it causes overflow. 
long int computeWays(int n, int k)
{  
   return ( factorial(n) / factorial(k) / factorial (n-k) );
}

/*******************************************************************
 *                           factorial                             *
 * Computes and returns the factorial of the non-negative integer  *
 * passed to it. n! means n * (n-1) * (n-2) ... * 1                *
 * 0! is a special case and is defined to be 1.                    *
 *******************************************************************/
// Notice that if number equals 0, the loop condition will 
// initially be false and the loop will never be executed. 
// This will, correctly, leave factTotal = 1.

long int factorial(int number)
{  
   long int factTotal = 1;

   for (int count = number; count >= 1; count--)
   {
      factTotal *= count;
   }
   return factTotal;
}
