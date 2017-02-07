// This program demonstrates the STL deque
// container.
#include <iostream>
#include <deque>
using namespace std;

int main()
{	
	deque<int> iDeque; 

	cout << "I will now enqueue items...\n";
	for (int x = 2; x < 8; x += 2)
	{
		cout << "Pushing " << x << endl;
		iDeque.push_back(x);
	}
	
	cout << "I will now dequeue items...\n";
	while (!iDeque.empty())
	{
		cout << "Popping " << iDeque.front() << endl;
		iDeque.pop_front();
	}
	return 0;
}