#include "serialization.h" 

Person::Person(string fname,  char mi,
               string lname,  int age)
{
  this->fname = fname;
  this->lname = lname;
  this->mi = mi;
  this->age = age;
}

//*********************************************
// Stores mi, age, then length of fname,      *
// then data for fname, then length of lname, *
// then data for lname                        *
//*********************************************
void Person::store(ofstream &outFile)
{
   outFile.write(&mi, sizeof(mi));
   outFile.write(reinterpret_cast<char *>(&age),
	              sizeof(age));
   
   // Write length and data for fname and lname
   int firstNameLength = fname.length();   
   outFile.write(reinterpret_cast<char *>(&firstNameLength),
	              sizeof(int));
   outFile.write(fname.data(), firstNameLength);   
   int lastNameLength = lname.length();
   outFile.write(reinterpret_cast<char *>(&lastNameLength),
	              sizeof(int));  
   outFile.write(lname.data(), lastNameLength); 
}

//**********************************************
// Reads the data in the format written by     *
// Person::store                               *
//**********************************************
void Person::load(ifstream &inFile)
{
   const int BUFFER_SIZE = 256;
   static char buffer[256]; //used to read names

   inFile.read(&mi, sizeof(mi));
   inFile.read(reinterpret_cast<char *>(&age), sizeof(age));
	
	// First get length and data for fname
   int firstNameLength;
   inFile.read(reinterpret_cast<char *>(&firstNameLength), 
	            sizeof(int));
					
   // Read the data for fname into a local buffer
   inFile.read(buffer, firstNameLength);
	
   // Null terminate the buffer
   buffer[firstNameLength] = '\0'; 
   fname = buffer;  //take advantage of convert constructor

   // Do the same thing for length and data for lname
   int lastNameLength;
   inFile.read(reinterpret_cast<char *>(&lastNameLength), 
	            sizeof(int));
   inFile.read(buffer, lastNameLength);
   buffer[lastNameLength] = '\0';
   lname = buffer;
}