//This program demonstrates object serialization.
#include "serialization.h" 
int main()
{
  // Array of objects to store in file
  Person people[ ] =
      { Person("Joseph", 'X', "Puff", 32),   
        Person("Louise", 'Y', "Me", 28)
      };
  // Open a file and store the array of people
  ofstream outFile("MorePeople.dat", ios::binary);
  if(!outFile)
  {
    cout << "The output file cannot be opened";
    exit(1);
  }
  
  // Store the people data in the file
  people[0].store(outFile);
  people[1].store(outFile);
  cout << "Data has been written to the file "
       << " 'Morepeople.dat'";
  
  // Close file
  outFile.close();
  return 0;
}