#include "budget3.h" 

// Definition of static member
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