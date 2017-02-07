#include "inheritance4.h" 
#include <iostream>
using namespace std;

//Global constants used for printing enumerated
//types
const string dName[] = {
   "Archeology", "Biology", "Computer Science"
};

const string cName[] = {
   "Freshman", "Sophomore", "Junior", "Senior"
};

int main()
{
   shared_ptr<TFaculty> 
   prof = make_shared<TFaculty>("Indiana Jones", Discipline::ARCHEOLOGY, "Dr.");
   shared_ptr<Student> 
   st = make_shared<Student>("Sean Bolster", Discipline::ARCHEOLOGY, prof);

   cout << prof->getName()
      << " teaches " << dName[static_cast<int>(prof->getDepartment())]
      << "." << endl;

   // Get student's advisor
   shared_ptr<Person> pAdvisor = st->getAdvisor();
   cout << st->getName() << "\'s advisor is "
        << pAdvisor->getName() << ".";
  
   cout << endl;
   return 0;
}