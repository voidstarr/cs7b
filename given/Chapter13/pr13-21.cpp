//This program demonstrates object deserialization.
#include "serialization.h" 
int main()
{
  const int NUM_PEOPLE = 2;
  Person people[NUM_PEOPLE];
  // Open a file and load the array of people
  ifstream inFile("MorePeople.dat", ios::binary);
  if(!inFile)
  {
    cout << "The input file cannot be opened";
    exit(1);
  } 
  
  // Read the data from the file
  for (int k = 0; k < NUM_PEOPLE; k++)
    people[k].load(inFile); 

  // Display the data
  for (int k = 0; k < NUM_PEOPLE; k++)
    people[k].display();  
  
  // Close the file
  inFile.close();
  return 0;
}