#include <string>
#include <memory>
using namespace std;

enum class Discipline {ARCHEOLOGY, BIOLOGY, COMPUTER_SCIENCE};
enum class Classification {FRESHMAN, SOPHOMORE, JUNIOR, SENIOR};

class Person
{
private:
    string name;
public:
    Person() { setName(""); }
    Person(const string& pName) { setName(pName); }
    void setName(const string& pName) { name = pName; }
    string getName() const { return name; }
};

class Student : public Person
{
private:
    Discipline major;
    shared_ptr<Person> advisor;
public:
    void setMajor(Discipline d) { major = d; }
    Discipline getMajor() const { return major; }
    void setAdvisor(shared_ptr<Person> p) { advisor = p; }
    shared_ptr<Person> getAdvisor() const { return advisor; }
};

class Faculty : public Person
{
private:
    Discipline department;
public:
    void setDepartment(Discipline d) { department = d; }
    Discipline getDepartment() const { return department; }
};




