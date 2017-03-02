#include <iostream>
#include <cmath>

struct MonthlyBudget {
  float housing;
  float utilities;
  float householdExp;
  float transportation;
  float food;
  float medical;
  float insurance;
  float entertainment;
  float clothing;
  float miscellaneous;
};

const std::string categories[10] = {
    "Housing",  "Utilities",    "Household expenses", "Transportation",
    "Food",     "Medical",      "Insurance",          "Entertainment",
    "Clothing", "Miscellaneous"};

void gotoXY(int, int);
void moveForward(int);
void printBudget(MonthlyBudget, int[10]);
void clearScreen();
void readBudget(MonthlyBudget&, const int[10]);
void reportBudget(MonthlyBudget, MonthlyBudget);
void printDiff(float,float);

float overall = 0;

int main() {
  MonthlyBudget budgeted = {500, 150, 65, 50, 250, 30, 100, 150, 75, 50};
  MonthlyBudget actual;
  clearScreen();
  int printPos[10];
  printBudget(budgeted, printPos);
  readBudget(actual, printPos);
  clearScreen();
  reportBudget(budgeted, actual);
  std::cout << std::endl << ((overall > 0) ? "under " : "over ") << std::abs(overall) << " for the whole month" << std::endl;
  return 0;
}

// \033[<L>;<C>f or \033[<L>;<C>H
void gotoXY(int x, int y) {
  // std::cout << "\033[" << x << ";" << y << "H";
  std::cout << "\033[" << x << ";" << y << "f";
}

void moveForward(int n) { std::cout << "\033[" << n << "C"; }

void clearScreen() {
  std::cout << "\033[2J";
  gotoXY(0, 0);
}

void reportBudget(MonthlyBudget b, MonthlyBudget a) {
  int pos[10];
  printBudget(b, pos);

  gotoXY(0, pos[0]);
  printDiff(b.housing, a.housing);
  gotoXY(2, pos[1]);
  printDiff(b.utilities, a.utilities);
  gotoXY(3, pos[2]);
  printDiff(b.householdExp, a.householdExp);
  gotoXY(4, pos[3]);
  printDiff(b.transportation, a.transportation);
  gotoXY(5, pos[4]);
  printDiff(b.food, a.food);
  gotoXY(6, pos[5]);
  printDiff(b.medical, a.medical);
  gotoXY(7, pos[6]);
  printDiff(b.insurance, a.insurance);
  gotoXY(8, pos[7]);
  printDiff(b.entertainment, a.entertainment);
  gotoXY(9, pos[8]);
  printDiff(b.clothing, a.clothing);
  gotoXY(10, pos[9]);
  printDiff(b.miscellaneous, a.miscellaneous);
  std::cout << std::endl;
}

void printDiff(float a, float b) {
  float diff = a - b;
  overall += diff;
  std::cout << ((diff > 0) ? "under " : "over ") << std::abs(diff);
}

void readBudget(MonthlyBudget &m, const int pos[10]) {
  gotoXY(0, pos[0]);
  std::cin >> m.housing;
  gotoXY(2, pos[1]);
  std::cin >> m.utilities;
  gotoXY(3, pos[2]);
  std::cin >> m.householdExp;
  gotoXY(4, pos[3]);
  std::cin >> m.transportation;
  gotoXY(5, pos[4]);
  std::cin >> m.food;
  gotoXY(6, pos[5]);
  std::cin >> m.medical;
  gotoXY(7, pos[6]);
  std::cin >> m.insurance;
  gotoXY(8, pos[7]);
  std::cin >> m.entertainment;
  gotoXY(9, pos[8]);
  std::cin >> m.clothing;
  gotoXY(10, pos[9]);
  std::cin >> m.miscellaneous;
}

void printBudget(MonthlyBudget m, int pos[10]) {
  std::cout << categories[0];
  moveForward(25 - categories[0].length());
  std::cout << m.housing << std::endl;
  pos[0] = 25 + std::to_string(m.housing).length();

  std::cout << categories[1];
  moveForward(25 - categories[1].length());
  std::cout << m.utilities << std::endl;
  pos[1] = 25 + std::to_string(m.utilities).length();

  std::cout << categories[2];
  moveForward(25 - categories[2].length());
  std::cout << m.householdExp << std::endl;
  pos[2] = 25 + std::to_string(m.householdExp).length();

  std::cout << categories[3];
  moveForward(25 - categories[3].length());
  std::cout << m.transportation << std::endl;
  pos[3] = 25 + std::to_string(m.transportation).length();

  std::cout << categories[4];
  moveForward(25 - categories[4].length());
  std::cout << m.food << std::endl;
  pos[4] = 25 + std::to_string(m.food).length();

  std::cout << categories[5];
  moveForward(25 - categories[5].length());
  std::cout << m.medical << std::endl;
  pos[5] = 25 + std::to_string(m.medical).length();

  std::cout << categories[6];
  moveForward(25 - categories[6].length());
  std::cout << m.insurance << std::endl;
  pos[6] = 25 + std::to_string(m.insurance).length();

  std::cout << categories[7];
  moveForward(25 - categories[7].length());
  std::cout << m.entertainment << std::endl;
  pos[7] = 25 + std::to_string(m.entertainment).length();

  std::cout << categories[8];
  moveForward(25 - categories[8].length());
  std::cout << m.clothing << std::endl;
  pos[8] = 25 + std::to_string(m.clothing).length();

  std::cout << categories[9];
  moveForward(25 - categories[9].length());
  std::cout << m.miscellaneous << std::endl;
  pos[9] = 25 + std::to_string(m.miscellaneous).length();
}
