//This program demonstrates the use of 
//objects of derived classes.
#include "inheritance1.h"
#include <iostream>
#include <memory>
using namespace std;

// These arrays of string are used to print
// values of enumerated types
const string dName[] =
{ "Archeology", "Biology", "Computer Science" };

const string cName[] =
{ "Freshman", "Sophomore", "Junior", "Senior" };

int main()
{
    // Create Faculty and Student objects
    shared_ptr<Faculty> 
    prof =  make_shared<Faculty>("Indiana Jones", 
                                 Discipline::ARCHEOLOGY);
    shared_ptr<Student> 
    st =  make_shared<Student>("Sean Bolster", 
                               Discipline::ARCHEOLOGY, prof);
    
    cout << "Professor " << prof->getName() << " teaches "
         << dName[static_cast<int>(prof->getDepartment())] 
         << "." << endl;

    //Get student's advisor
    shared_ptr<Person> pAdvisor = st->getAdvisor();
    cout << st->getName() << "\'s advisor is "
         << pAdvisor->getName() << ".";
    cout << endl;

    return 0;
}
