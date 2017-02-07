// This program illustrates the use of unique_ptr to manage memory 
#include <iostream>
#include <memory>
#include <string>
using namespace std;

int serialNo = 1;
class Thing
{
		int instanceNumber;
public:		
		Thing()
		{
				instanceNumber = serialNo++;
				cout << "Thing " << instanceNumber << " created.\n";
		}
		~Thing()
		{
				cout << "Thing " << instanceNumber << " destroyed.\n"; 
		}
		string to_string()
		{
				return "Thing " + std::to_string(instanceNumber) + "\n";
		}
};

int main()
{
		unique_ptr<Thing> u1 = make_unique<Thing>();          // 1
		unique_ptr<Thing> u2 = make_unique<Thing>();          // 2

		unique_ptr<Thing[]> uArr2 = make_unique<Thing[]>(2);  // 3, 4
		unique_ptr<Thing> u5 = make_unique<Thing>();          // 5
		unique_ptr<Thing> u6 = make_unique<Thing>();          // 6

		u5 = move(u6);                  // destroy 5, u5 manages 6
		u1.reset();                     // destroy 1

		u1.reset(new Thing);            // u1 manages 7

		// output array managed by uArr2	
		cout << uArr2[0].to_string();
		cout << uArr2[1].to_string();

		// Now all smart pointers will go out scope

		return 0;
}