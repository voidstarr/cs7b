// This program illustrates aggregation, composition
// and object lifetimes.
#include <iostream>
#include <string>
using namespace std;

class Date
{
   string month;
   int day, year;
   int personID; //ID of person whose birthday this is.
public:
   Date(string m, int d, int y, int id) :
      month(m), day(d), year(y), personID(id)
   {
      cout << "Date-Of-Birth object for person "
         << personID << " has been created.\n";
   }
   ~Date()
   {
      cout << "Date-Of-Birth object for person "
         << personID << " has been destroyed.\n";
   }
};

class Country
{
   string name;
public:
   Country(string name) : name(name)
   {
      cout << "A Country object has been created.\n";
   }
   ~Country()
   {
      cout << "A Country object has been destroyed.\n";
   }
};

class Person
{
   string name;
   Date dateOfBirth;
   int personID; // Person identification number (PID)
   shared_ptr<Country> pCountry;
public:
   Person(string name, string month, int day, int year, shared_ptr<Country>& pC) :
      name(name),
      dateOfBirth(month, day, year, Person::uniquePersonID),
      personID(Person::uniquePersonID),
      pCountry(pC)
   {
      cout << "Person object "
         << personID << " has been created.\n";
      Person::uniquePersonID++;
   }
   ~Person()
   {
      cout << "Person object "
         << personID << " has been destroyed.\n";
   }
   static int uniquePersonID; // Used to generate PIDs
};

// Define the static class variable
int Person::uniquePersonID = 1;

int main()
{
   // Create a Country object
   shared_ptr<Country> p_usa = make_shared<Country>("USA");
   // Create a Person object
   shared_ptr<Person> p = make_shared<Person>("Peter Lee", "January", 1, 1985, p_usa);
   // Create another Person object
   shared_ptr<Person> p1 = make_shared<Person>("Eva Gustafson", "May", 15, 1992, p_usa);
   cout << "Now there are two people.\n";
  
   // Both persons will go out of scope when main returns
   return 0;
}

