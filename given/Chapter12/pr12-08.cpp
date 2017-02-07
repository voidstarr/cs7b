// This program illustrates the use of sstream objects 
#include <sstream> 
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str = "John  20 50";  // String to read from
    const char *cstr = "Amy 30 42";    // Cstring to read from
    istringstream istr1(str);    // istr1 will read from str
    istringstream istr2;         // istr2 will read from cstr
    ostringstream ostr;          // The ostringstream object to write to

    string name;
    int score1, score2, average_score;

    // Read name and scores and compute average then write to ostr
    istr1 >> name >>  score1 >> score2;
    average_score = (score1 + score2)/2;
    ostr <<  name << " has average score " << average_score << "\n";

    // Set istr2 to read from the C string and repeat the above
    istr2.str(cstr);
    istr2 >> name >>  score1 >> score2;
    average_score = (score1 + score2)/2;
    ostr <<  name << " has average score " << average_score << "\n";

    // Switch to hexadeximal output on ostr
    ostr << hex;

    // Write Amy's scores in hexadecimal
    ostr << name << "'s scores in hexadecimal are: " << score1
         << " and " << score2 << "\n";

    // Extract the string from ostr and print it to the screen
    cout << ostr.str();

    return 0;
}