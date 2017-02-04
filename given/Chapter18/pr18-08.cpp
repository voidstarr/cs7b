// This program demonstrates the STL queue
// container adapter.
#include <iostream>
#include <queue>
using namespace std; 

int main()
{	
	queue<int> iQueue;

	cout << "I will now enqueue items...\n";
	for (int x = 2; x < 8; x += 2)
	{
		cout << "Pushing " << x << endl;
		iQueue.push(x);
	}
	cout << "I will now dequeue items...\n";
	while(!iQueue.empty())
	{
		cout << "Popping " << iQueue.front() << endl;
		iQueue.pop();
	}
	return 0;
}