// This program uses a nested loop to average 
// a set of test scores for multiple students.
#include <iostream>
using namespace std;

int main()
{
   int numStudents,    // Number of students
       numTests;       // Number of tests per student
   double average;     // Average test score for a student

   // Get the number of students
   cout << "This program averages test scores.\n";
   cout << "How many students are there? ";
   cin  >> numStudents;
   
   // Get the number of test scores per student
   cout << "How many test scores does each student have? ";
   cin  >> numTests;
   cout << endl;
   
   // Read each student's scores and compute their average
   for (int snum = 1; snum <= numStudents; snum++)    //Outer loop
   {  double total = 0.0;   // Initialize accumulator 
									  
      for (int test = 1; test <= numTests; test++)    //Inner loop
      {  int score;
		
         // Read a score and add it to the accumulator
		 cout << "Enter score " << test << " for ";
         cout << "student " << snum << ": ";
         cin  >> score;
         total += score;   
      }                                               //End inner loop
      // Compute and display the student's average    
      average = total / numTests;
      cout << "The average score for student " << snum;
      cout << " is " << average << "\n\n";
   }                                                  //End outer loop
   return 0;
}
