// This program uses the strcpy function to copy one C-string to another.
#include <iostream>
using namespace std;

int main()
{
	const int SIZE = 12;
    char name1[SIZE],
	     name2[SIZE];
	
	strcpy(name1, "Sebastian");             
	cout << "name1 now holds the string " << name1 << endl;

	strcpy(name2, name1);
	cout << "name2 now also holds the string " << name2 << endl;
	
	return 0;
}
