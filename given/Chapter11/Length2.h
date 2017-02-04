#ifndef _LENGTH1_H 
#define	_LENGTH1_H
#include <iostream>
using namespace std;

class Length
{ 
private:
    int len_inches;
public:
    Length(int feet, int inches)
    {
        setLength(feet, inches);
    }
    Length(int inches){ len_inches = inches; }
    int getFeet() const{ return len_inches / 12; }
    int getInches() const { return len_inches % 12; }
    void setLength(int feet, int inches)
    {
        len_inches = 12 *feet + inches;
    }
    // Type conversion operators
    operator double() const;
    operator int() const { return len_inches;  }
    
    // Overloaded stream output operator
    friend ostream &operator<<(ostream &out, Length a);  
};
#endif


