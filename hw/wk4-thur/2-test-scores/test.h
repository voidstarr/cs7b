#include <iostream>
struct Test {
  std::string student;
  int score;
};

std::ostream& operator << (std::ostream &o, const Test &t){
  o << t.student << " " << t.score;
  return o;
}
