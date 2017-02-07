// This program illustrates pointers to class objects
// and structures as parameters of functions.
#include <iostream>
#include <string> 
using namespace std;

// Person class
class Person
{
private:
	  string name;
	  int  age;
public:
	  Person(string name1, int age1)
	  {
		    name = name1;
		    age = age1;
	  }
	  int getAge() { return age; }
	  string getName() { return name; }
};

// Rectangle structure
struct Rectangle
{
	  int width, height;
};

// Prototypes
void magnify(Rectangle *pRect, int mfactor);
int lengthOfName(Person *p);
void output(Rectangle *pRect);

int main()
{
	// Create, then magnify a rectangle by a factor of 3
	Rectangle rect;
	rect.width = 4;
	rect.height = 2;
	cout << "Initial size of  rectangle is ";
	output(&rect);
	magnify(&rect, 3);
	cout << "Size of Rectangle after magnification is ";
	output(&rect);

	// Create a Person object and find the length of the person's name
	Person *pPerson = new Person("Susan Wu", 32);
	cout << "The name " << pPerson->getName()
	     << " has length " << lengthOfName(pPerson) << endl;

	delete pPerson;
  	pPerson = nullptr;
	  
  	return 0; 
}

//*********************************************
// Output the dimensions of a rectangle       *
//*********************************************
void output(Rectangle *pRect)
{
	cout << "width: " << pRect->width << " height: " 
         << pRect->height << endl;
}

//******************************************************
// Returns the number of characters in a person's name *
//******************************************************
int lengthOfName(Person *p)
{
   string name = p->getName();
   return name.length();
}

//******************************************************
// Stretch the width and height of a rectangle by      *
// a specified factor                                  *
//******************************************************
void magnify(Rectangle *pRect, int factor)
{
   pRect->width = pRect->width * factor;
   pRect->height = pRect->height * factor;
}