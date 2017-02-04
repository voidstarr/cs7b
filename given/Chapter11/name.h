#include <string>
#include <iostream>
#include <cstdlib>

using namespace std;
class Name
{
    string first_name;    
    string last_name; 
    void subError()
    {
        cout << "Index must be 1 or 2\n" ;
        exit(1);
    }
public:
    string &operator[ ](int index)
    {
        switch(index)
        {
            case 1: return first_name; break;
            case 2: return last_name; break;
            default: subError();
        }
    }
};