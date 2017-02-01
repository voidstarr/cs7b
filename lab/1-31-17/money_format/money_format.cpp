/*Program asks the user for a number and outputs the number arranged in currency
   format
      $<money>.<decimal>                 */

#include <iomanip>
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <string>

using namespace std;

int find_comma(string&);

int main() {
  double currencyUser;

  while (true) {
    cout << "Please input your currency amount: ";
    cin >> currencyUser;

    string frontHalf;
    string lastHalf;
    stringstream ss;
    ss << currencyUser;
    string currencyOut = ss.str();
    string commaBoi;
    int pos = find_comma(currencyOut);
    if (pos != -1) {
      lastHalf = currencyOut.substr(pos);
      frontHalf = currencyOut.erase(pos);
      cout << "frontHalf: " << frontHalf << endl;
      try {
        commaBoi = frontHalf.insert(frontHalf.length() - 3, ",");
      } catch (exception &e) {
        cout << e.what() << endl;
      }
    } else {
      cout << "wat" << endl;
      continue;
    }
    cout << commaBoi << lastHalf << endl;
  }

  // end of lief*

  return 0;
}

int find_comma(string &str) {
    for (int i = 0; i < str.length(); i++) {
        cout << str[i] << endl;
        if(str[i] == '.'){
            cout << "found" << endl;
            return i;
        }
    }
    return -1;
}
