#include <iostream>
using namespace std; 

class IntClass
{
private:
  int value;
public:
  //convert constructor from int
  IntClass(int a)
  {
    value = a;
  }
  int getValue(){ return value; }
};

//*******************************************
// This function returns an int even though *
// an IntClass object is declared as the    *
// return type                              *
//*******************************************
IntClass f(int a)
 {
     return a;
 }

//*******************************************
// prints the int value inside an IntClas   *
// object                                   *
//*******************************************
void printValue(IntClass x)
{ 
   cout << x.getValue();
}

int main()
{
   // initialize with an int
   IntClass y = 23;
   cout << "The value is " << y.getValue() << endl;

   // assign an int
   y = 24;
   cout  << "The value is " << y.getValue()  << endl;

   // pass an int to a function expecting IntClass
   cout << "The value is "; 
   printValue(25);
   cout << endl;

   // demonstrate conversion on a return
   y = f(26);
   cout << "The value is ";
   printValue(y);

   return 0; 
}


