// This program demonstrates the creation and use
// of objects of derived classes.
#include <iostream>
#include "inheritance.h"

using namespace std;

// These arrays of string are used to print the
// enumerated types.
const string dName[] = {
    "Archeology", "Biology", "Computer Science"
};

const string cName[] = {
    "Freshman", "Sophomore", "Junior", "Senior"
};

int main()
{
    // Create a Faculty object
    shared_ptr<Faculty> prof = make_shared<Faculty>();
    
    // Use Person member function to set name
    prof->setName("Indiana Jones");

    // Use  Faculty member function to set Department
    prof->setDepartment(Discipline::ARCHEOLOGY);
    cout << "Professor " << prof->getName()
        << " teaches in the " << "Department of ";

    // Get Department as an enumerated type
    Discipline dept = prof->getDepartment();

    // Print out the department in string form
    cout << dName[static_cast<int>(dept)] << endl;    

    return 0;
}