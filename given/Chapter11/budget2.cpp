#include "budget2.h" 

// Definition of the static member of Budget class
double Budget::corpBudget = 0;

//**********************************************************
// Definition of static member function mainOffice         *
// This function adds the main office's budget request to  *
// the corpBudget variable.                                *
//**********************************************************
void Budget::mainOffice(double budReq)
{
    corpBudget += budReq;
}