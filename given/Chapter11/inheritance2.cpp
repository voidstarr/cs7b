#include "inheritance2.h"
//********************************************* 
// Constructor for the Student class.         *
//*********************************************
Student::Student(const string& sname, Discipline d, 
                 const shared_ptr<Person>& adv)
: Person(sname) // Base constructor initialization
{
    major = d;
    advisor = adv;
}
