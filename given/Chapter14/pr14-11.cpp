
// This program evaluates prefix expressions. 
#include <stdlib.h>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;

int prefixExpr(istream &exprStream); //Prototype

int main()
{
    string input;
    cout << "Enter prefix expressions to evaluate.\n"
         << "Press enter after each expression,\n"
         << "and press enter on a blank line to quit.\n\n" ;
    cout << "Enter a prefic expression to evaluate: ";
    getline(cin, input);
    while (input.size() != 0)
    {
        // Convert string to istringstream
        istringstream exprStream(input);
        // Evaluate the prefix expression
        cout << prefixExpr(exprStream) << endl;
        // Get next line of input
        cout << "Enter a prefix expression to evaluate: ";
        getline(cin, input);
    }
    return 0;
}

//***************************************************************
// Takes an istream that contains a single prefix expression p  *
// and returns the integer value of p                           *
//***************************************************************
int prefixExpr(istream &exprStream)
{

   // Peek at first non-space character in prefix expression
   char ch = exprStream.peek();
   while (isspace(ch))
   {
       ch = exprStream.get();   // Read the space character
       ch = exprStream.peek();  // Peek again
   }

   if (isdigit(ch))
   {
       // The prefix expression is a  single number
       int number;
       exprStream >> number;
       return number; 
   }
   else
   {
       // The prefix expression is an operator followed
       // by two prefix expressions: Compute values of
       //the prefix expressions

       // Read the operator
       ch = exprStream.get();

       // Recursively evaluate the two subexpressions
       int value1 = prefixExpr(exprStream);
       int value2 = prefixExpr(exprStream);

       // Apply the operator
       switch(ch)
       {
           case '+': return value1 + value2;
           case '-': return value1 - value2;
           case '*': return value1 * value2;
           case '/': return value1 / value2;
           default:  cout << "Bad input expression";
                     exit(1);
       }
   }
}
