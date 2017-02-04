// This program demonstrates type compatibility within
// an inheritance hierarchy. 
#include "inheritance4.h"
#include <iostream>
using namespace std;

int main()
{
    shared_ptr<Person> pp;
    shared_ptr<Faculty> pf;
    shared_ptr<TFaculty> ptf;
    ptf = make_shared<TFaculty>("Indiana Jones", Discipline::ARCHEOLOGY, "Dr.");

    // Calling getName through a pointer to TFaculty uses
    // the version of getName in TFaculty
    cout << "Get name through a pointer to TFaculty: ";
    cout << ptf->getName() << endl;

    // Assignment of derived to base needs no cast
    pf = ptf;

    // Calling getName through a pointer to Faculty uses the
    // version of getName in Faculty
    cout << "Get name through a pointer to Faculty: ";
    cout << pf->getName() << endl;

    // Assignment of derived to base needs no cast
    pp = ptf;

    // Derived class members can be accessed using a cast
    cout << "Get name through a cast to pointer to TFaculty: ";
    cout << static_pointer_cast<TFaculty> (pp)->getName() << endl;

    // Assigment from base to derived needs a cast
    shared_ptr<TFaculty> ptf1;
    ptf1 = static_pointer_cast<TFaculty>(pp);

    // Access getName through a pointer to TFaculty
    cout << "Get name through a pointer to TFaculty: ";
    cout << ptf1->getName();

    cout << endl;
    return 0;
}