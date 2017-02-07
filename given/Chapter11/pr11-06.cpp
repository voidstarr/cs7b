// This program demonstrates the operation of the
// default copy constructor.
#include <iostream>
#include <string> 
using namespace std;

class Address
{
private:
  string street;  
public:
  Address() { street = ""; }
  Address(string st) { setStreet(st); }
  void setStreet(string st) { street = st; }
  string getStreet() const { return street; }  
};

int main()
{
  // Mary and Joan live at same address
  Address mary("123 Main St");
  Address joan = mary;
  cout << "Mary lives at " << mary.getStreet() << endl;
  cout << "Joan lives at " << joan.getStreet() << endl;
  
  // Now Joan moves out
  joan.setStreet("1600 Pennsylvania Ave");
  cout << "Now Mary lives at " << mary.getStreet() << endl;
  cout << "Now Joan lives at " << joan.getStreet() << endl;
  
  return 0;
}    