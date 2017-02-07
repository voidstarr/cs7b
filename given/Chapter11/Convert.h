#include <iostream> 
using namespace std;

class IntClass
{
private:
   int value;
public:
   // Convert constructor from int
   IntClass(int intValue)
   {
      value = intValue;
   }
   int getValue() const { return value; }
};
