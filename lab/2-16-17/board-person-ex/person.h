#include <string>
#include <ifstream>
#include <ctime>
#include <sstream>

class Person {
    private:
        int idx;
        std::string fName, lName;
        std::string city, state;
        int zip;
        std::string dob;
    public:
        Person() {
        }
        Person(int i, std::string fN, std::string lN, std::string c, std::string s, int z, std::string DoB): idx(i), fName(fN), lName(lN), city(c), state(s), zip(z), dob(DoB) {}
        std::string getFullName() const {return fName+" "+lName;}
        std::string getFirstName() const {return fName;}
        std::string getLastName() const {return lName;}
        std::string getCity() const {return city;}
        std::string getState() const {return state;}
        int getZip() const {return zip;}
        std::string getDoB() const {return dob;}
        int getIndex() const {return idx;}
        void writePerson();
        void readPerson();
        void display();
        int calcAge();

};
