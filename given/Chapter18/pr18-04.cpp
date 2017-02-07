// This program demonstrates the STL stack 
// container adapter.
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main()
{
    stack< int, vector<int> > iStack;

    for (int x = 2; x < 8; x += 2)
    {
        cout << "Push: " << x << "\n";
        iStack.push(x);
    }

    cout << "The size of the stack is ";
    cout << iStack.size() << endl;

    // Print items and pop until the stack is empty
    while (!iStack.empty())
    {
        cout << "Pop: " << iStack.top() << "\n";
        iStack.pop();
    }
    return 0;
}