#include <iostream>

struct MonthlyBudget {
    static std::string categories[10] = {"Housing","Household expenses","Transportation","Food","Medical",
                                        "Insurance","Entertainment","Clothing","Miscellaneous"};
    double categoriesExp[10];
    double housing;
    double utilities;
    double householdExpenses;
    double transportation;
    double food;
    double medical;
    double insurance;
    double entertainment;
    double clothing;
    double miscellaneous;

};

int main() {
  return 0;
}
