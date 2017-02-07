#include <string>
#include <vector>
using namespace std;
class Trans
{
    vector<string> numerals    
    {
      "zero", "one", "two", "three", "four", "five", 
      "six", "seven", "eight", "nine", "ten"
    };
public:
    int operator[ ](string num_str)
    {
        for (int k = 0; k < numerals.size(); k++)
        {
            if (numerals[k] == num_str)
            {
                return k;
            }
        }
        return -1;
    }
};