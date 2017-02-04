// This program demonstrates the use of the override keyword.
#include <iostream>
#include <memory>
using namespace std;

class Base
 {
    public:
      virtual void functionA(int arg) const
       { cout << "This is Base::functionA" << endl; }
 };

 class Derived : public Base
 {
   public:
       virtual void functionA(int arg) const override
        { cout << "This is Derived::functionA" << endl; }
  };

 int main()
 {
    // Base pointer b points to a Derived class object.
    shared_ptr<Base>b = make_shared<Derived>();
    // Call virtual functionA through Base pointer.
    b->functionA(99);

    return 0;
  }
