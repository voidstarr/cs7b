#ifndef AUXIL_H 
#define AUXIL_H

// Aux class declaration.
class Aux 
{
private:
   double auxBudget;
public:
   Aux() { auxBudget = 0; }
   void addBudget(double);
   double getDivBudget() const { return auxBudget; }
};
#endif