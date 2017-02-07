#include "inheritance1.h"
//********************************************* 
// Constructor for the Student class.         *
//*********************************************
Student::Student(const string& sname, Discipline d, 
                 const shared_ptr<Person>& adv)
{
    // Access the  protected member name
    name = sname;

    // Access the other members
    major = d;
    advisor = adv;
}
