#include <string>
#include <memory>
using namespace std;

enum Discipline { ARCHEOLOGY, BIOLOGY, COMPUTER_SCIENCE };
enum Classification { FRESHMAN, SOPHOMORE, JUNIOR, SENIOR };

// The Person class is modified to make getName
// a virtual function
class Person {
protected:
    string name;
public:
    Person() { setName(""); }
    Person(const string& pName) { setName(pName); }
    void setName(const string& pName) { name = pName; }

    // Virtual function
    virtual string getName() const { return name; }
};

class Student : public Person
{
private:
    Discipline major;
    shared_ptr<Person> advisor;
public:
    Student(const string& sname, Discipline d, 
           const shared_ptr<Person>& adv) : Person(sname)
    {
        major = d;
        advisor = adv;
    }
    void setMajor(Discipline d) { major = d; }
    Discipline getMajor() const { return major; }
    void setAdvisor(const shared_ptr<Person>& p) { advisor = p; }
    shared_ptr<Person> getAdvisor() const { return advisor; }
};

class Faculty : public Person
{
private:
    Discipline department;
public:
    Faculty(const string& fname, Discipline d) : Person(fname)
    {
        department = d;
    }
    void setDepartment(Discipline d) { department = d; }
    Discipline getDepartment() const { return department; }
};

class TFaculty : public Faculty
{
private:
    string title;
public:
    TFaculty(const string& fname, Discipline d, const string& title)
        : Faculty(fname, d)
    {
        setTitle(title);
    }

    void setTitle(const string& title) { this->title = title; }

    // Virtual function 
    virtual string getName() const override
    {
        return title + " " + Person::getName();
    }
};