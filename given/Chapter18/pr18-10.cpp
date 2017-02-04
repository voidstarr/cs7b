 // This program converts postfix expressions to infix.
#include <stdio.h>
#include <cstdlib>
#include <string>
#include <iostream>
#include <sstream>
#include <stack>

using namespace std;

string postfixExpr(istream & inputStream);

int main()
{
    string input;
    cout << "Enter a postfix expression to convert to infix," 
         << " \nor a blank line to quit the program:";
    getline(cin, input);
    while (input.size() != 0)
    {
        // Convert string to a string stream
        istringstream inputExpr(input);   
        cout << "The infix equivalent is " 
             << postfixExpr(inputExpr) << endl;
        cout << "Enter another postfix expression: ";
        getline(cin, input);
    }
    return 0;
}

//***************************************************************
// Takes an istream that contains a single postfix expression p *
// and returns a string representing the infix equivalent of p *
//***************************************************************
string postfixExpr(istream & in)
{
   // Holds intermediate values in computation
   stack<string> infixStack;  
   // Used to read characters in the expression
   char ch;       
   // Used to read numbers in the expression            
   int number;        
   // Used to remove infix expressions from the stack        
   string lExpr, rExpr;       

   ch = in.peek();
   while (ch != EOF)
   {
       // If we have a whitespace character skip it and
       // continue with the next iteration of this loop
       if (isspace(ch))
       {
           ch = in.get();
           ch = in.peek();
           continue;  // Go back to top of loop
       }
       // Nonspace character is next in input stream
       // If the next character is a number, read it, convert
       // to string, and push the string onto the infix stack
       if (isdigit(ch))
       {
          in >> number;
          // Use to convert number to string
          ostringstream numberStr; 
          // Convert number to string using stream
          numberStr << number;   
          // Push the expression string onto the stack 
          infixStack.push(numberStr.str());
          ch = in.peek();
          continue;
       }
       // If the next character is an operator,
       // pop the two top infix expressions stored on the
       // stack, put the operator between the two infix 
       // expressions, and then push the result on the stack
       rExpr = infixStack.top();
       infixStack.pop();
       lExpr = infixStack.top();
       infixStack.pop();
       if (ch == '+' || ch == '-' || + ch == '*' || ch == '/')
       {
           infixStack.push("(" + lExpr + " " + 
                            ch + " " + rExpr + ")");
       }
       else
       {
           cout << "Error in the input expression" << endl;
           exit(1);
       }
       ch = in.get();  // Actually read the operator character
       ch = in.peek(); // Prepare for next iteration of loop
   }
   return infixStack.top();
}
