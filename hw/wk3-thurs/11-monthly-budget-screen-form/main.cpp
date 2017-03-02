#include <iostream>

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
void printBudget(MonthlyBudget);
void clearScreen();

int main() {
  MonthlyBudget budgeted = {500, 150, 65, 50, 250, 30, 100, 150, 75, 50};
  MonthlyBudget actual;
  clearScreen();
  gotoXY(0,0);
  printBudget(budgeted);
  // gotoXY(22, 10);
  int asdf;
  std::cin >> asdf;
  return 0;
}

// \033[<L>;<C>f or \033[<L>;<C>H
void gotoXY(int x, int y) {
  // std::cout << "\033[" << x << ";" << y << "H";
  std::cout << "\033[" << x << ";" << y << "f";
}

void moveForward(int n) { std::cout << "\033[" << n << "C"; }

void clearScreen() { std::cout << "\033[2J"; }

void printBudget(MonthlyBudget m) {
  std::cout << categories[0];
  moveForward(25 - categories[0].length());
  std::cout << m.housing << std::endl;

  std::cout << categories[1];
  moveForward(25 - categories[1].length());
  std::cout << m.utilities << std::endl;

  std::cout << categories[2];
  moveForward(25 - categories[2].length());
  std::cout << m.householdExp << std::endl;

  std::cout << categories[3];
  moveForward(25 - categories[3].length());
  std::cout << m.transportation << std::endl;

  std::cout << categories[4];
  moveForward(25 - categories[4].length());
  std::cout << m.food << std::endl;

  std::cout << categories[5];
  moveForward(25 - categories[5].length());
  std::cout << m.medical << std::endl;

  std::cout << categories[6];
  moveForward(25 - categories[6].length());
  std::cout << m.insurance << std::endl;

  std::cout << categories[7];
  moveForward(25 - categories[7].length());
  std::cout << m.entertainment << std::endl;

  std::cout << categories[8];
  moveForward(25 - categories[8].length());
  std::cout << m.clothing << std::endl;

  std::cout << categories[9];
  moveForward(25 - categories[9].length());
  std::cout << m.miscellaneous << std::endl;
}
