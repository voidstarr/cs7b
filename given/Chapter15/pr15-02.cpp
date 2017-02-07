// This exhibits the default non-polymorphic behavior of C++.
#include "inheritance4.h"
#include <vector>
#include <iostream>
using namespace std; 

int main()
{
    // Create a vector of pointers to Person objects    
    vector<shared_ptr<Person>> people
    {
        make_shared<TFaculty>("Indiana Jones", Discipline::ARCHEOLOGY, "Dr."),
        make_shared<Student>("Thomas Cruise", Discipline::COMPUTER_SCIENCE, nullptr),
        make_shared<Faculty>("James Stock", Discipline::BIOLOGY),
        make_shared<TFaculty>("Sharon Rock", Discipline::BIOLOGY, "Professor"),
        make_shared<TFaculty>("Nicole Eweman", Discipline::ARCHEOLOGY, "Dr.")
    };

    // Print the names of the Person objects
    for (int k = 0; k < people.size(); k++)
    {
        cout << people[k]->getName() << endl;
    }
    return 0;
}