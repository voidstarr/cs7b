#include "Length2.h" 

//*********************************************** 
// Operator double converts Length to a double  *
//***********************************************
Length::operator double() const
{
    return len_inches /12 + (len_inches %12) / 12.0;
}

//*********************************************
// Overloaded stream insertion operator <<    *
//*********************************************
ostream &operator<<(ostream& out, Length a)
{
    out << a.getFeet() << " feet, " << a.getInches() << " inches";
    return out;
}


