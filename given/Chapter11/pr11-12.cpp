// This program demonstrates the use of the [ ] operator.
#include "name.h"
int main()
{   
    Name  name;
    
    // Set first name and last name
    name[1] = "Joseph";
    name[2] = "Puff";    
    
    // Access first name and last name
    cout << name[1] << " " << name[2] << " aka Joe Blow\n";
    
    return 0;    
}
