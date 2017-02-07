#include "inheritance3.h" 
//*********************************************
// Constructor for the Student class.         *
//*********************************************
Student::Student(const string& sname, Discipline d, 
                 const shared_ptr<Person>& adv)
    : Person(sname)
{
    major = d;
    advisor = adv;
}
