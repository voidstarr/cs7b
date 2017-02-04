#include "auxil.h"
#include "budget3.h"  

//***********************************************************
// Definition of member function addBudget                  *
// This function is declared a friend by the Budget class   *
// It adds the value of argument b to the static corpBudget *
// member variable of the Budget class.                     *
//***********************************************************

void Aux::addBudget(double b)
{
    auxBudget += b;
    Budget::corpBudget += auxBudget;
}