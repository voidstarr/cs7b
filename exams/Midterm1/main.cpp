/************************************************************
 *                                                          *
 *                  MIDTERM 1 CS-7B                         *
 *                Thursday March 9 2017                     *
 *                     YOUR NAME                            *
 *                        SID                               *
 *                                                          *
 ************************************************************
*/

/**

Exercise 1:
Explain why array variables differ from regular variables.



Exercise 2:
Show how you declare an array of 10 integers. Call your
array arr1



Exercise 3:
Show how you declare an array, called arr2 that initialize
the array with numbers from 1 to 10.



Exercise 4:
Using the main() below, create a function prototype called
loadRandomNums. Implement the function after the main(). The
function shall store 100 random numbers into an array. Use
numbers between 14 and 47. Make sure the end numbers 14 and
79 are included.


Exercise 5:
Using the main below, create a function prototype called
displayArray that is somewhat general meaning that it should be
able to be used for any arrays. Implement the function after the
main().


Exercise 6:
test your two function in main() below. The output should look
like the example below. There is exactly 5 spaces between the
numbers. You have the same without using " ". Your output should
look like this.
   21   19   24   28   41   30   34   30   14   32
   41   41   39   45   47   29   17   22   47   44
   37   32   40   31   34   20   27   30   46   19
   21   14   29   26   47   36   45   31   15   14
   21   25   22   19   41   20   25   41   47   14
   27   16   36   29   25   21   33   31   37   44
   22   23   36   20   30   30   44   14   34   18
   22   19   26   45   40   30   26   39   29   26
   25   23   26   44   36   22   16   46   39   40
   26   17   24   15   43   30   16   22   27   31

Exercise 7:
When a two dimensional array is passed as an argument
to a function, what do you have to do for the code
to compile?



Exercise 8:
What is the correct way of declaring the class Car?


Exercise 9:
What kind of data type is the class Car?



Exercise 10:
The class Car has three member variables, make, year
and speed. What access specifier would you use use when
you implement the variables in the class? Explain.


Exercise 11:
Implement the class below with its member variables
mentioned in Ex 10.


Exercise 12:
Implement accessors and mutators for all variables.


Exercise 13:
The default constructor is setting all variables to
zero or empty string.


Exercise 14:
Create an overloaded constructor that uses a class member
function to initialize the variable for the class. In
other words, DO NOT just assign values directly to the
variable.


Exercise 15:
Create two functions, accelerate and brake. Every time the
accelerate is called, the speed should be increased by 5mph.
Every time break is called, speed should decrease by 5mph.


Exercise 16:
Create a function prototype called printClass that takes a
Car object as argument. Then implement the function
below main(). Test your class inside the function with five
accelerations and five brakes. See ex below.

The make is:       Honda
The year is:       2010
Starting speed is: 20 mph

Speed is now: 25 mph
Speed is now: 30 mph
Speed is now: 35 mph
Speed is now: 40 mph
Speed is now: 45 mph

Time to slow down
Speed is now: 40 mph
Speed is now: 35 mph
Speed is now: 30 mph
Speed is now: 25 mph
Speed is now: 20 mph

Exercise 17
Does it make sense to pass the Car object as const Car as
argument to the printClass function? Explain.


Exercise 18
Create a function selectionSort(), both prototype and
implementation that can sort an array.
If you are not sure how to program selection sort, create
a function called bubbleSort() for reduced score.


Exercise 19
Use your sort function to sort the array of random numbers
you created in Exercise 4, and use your displayArr function
to verify that your array has been sorted.


Exercise 20
What is the correct way to declare a pointer to an int?


Exercise 21
A double number is declared and 2.5 is assigned to number.
what is the correct way to declare a pointer that can
point to number.
Do this in the main() function



Exercise 22
Write a statement that display the address to number.
Do this in the main() function


Exercise 23
Write a statement that display the value in number using the
pointer.
Do this in the main() function


Exercise 24
Create a dynamic allocated array and assign anything from 80
to 150 random numbers using your loadRandomNum function you have
created in Exercise 4.



Exercise 25
In the main() function print out the random numbers stored in
your dynamically allocated array. Use your displayArr function


Exercise 26
sort the array using the sort function you have created.


Exercise 27
Why does the task in Exercise 26 work.


Exercise 28
Modify the car class to add price and color. Create an arr
that can store 8 car objects. Then create a new sort
function that can sort the car objects based on car price
in descending order (Most expensive car first). Finally
create a new display function that can display the array
of car objects. Feel free to use this code.

Car carArr[MY_SIZE] = {Car("Honda", 2013, 6000.0, "Blue"),
                           Car("Lexus", 2010, 4000.0, "Red"),
                           Car("Corvette", 2013, 10000.0, "Yellow"),
                           Car("Honda", 2008, 2000.0, "Silver" ),
                           Car("Toyota", 2013, 3000.0, "Brown"),
                           Car("Porsche", 2012, 12000.0, "Yellow"),
                           Car("Nissan", 2000, 1000.0, "Silver" ),
                           Car("Mercedes", 2016, 62000.0, "White")};

End of midterm.

*/

#include <iostream>


using namespace std;


int main()
{

    cout << "Hello World" << endl;
    return 0;
}


/**


        Printout from Exercise 6
________________________________________________________

   21   19   24   28   41   30   34   30   14   32
   41   41   39   45   47   29   17   22   47   44
   37   32   40   31   34   20   27   30   46   19
   21   14   29   26   47   36   45   31   15   14
   21   25   22   19   41   20   25   41   47   14
   27   16   36   29   25   21   33   31   37   44
   22   23   36   20   30   30   44   14   34   18
   22   19   26   45   40   30   26   39   29   26
   25   23   26   44   36   22   16   46   39   40
   26   17   24   15   43   30   16   22   27   31


        Printout from Exercise 16
________________________________________________________

The make is:       Honda
The year is:       2010
Starting speed is: 20 mph

Speed is now: 25 mph
Speed is now: 30 mph
Speed is now: 35 mph
Speed is now: 40 mph
Speed is now: 45 mph

Time to slow down
Speed is now: 40 mph
Speed is now: 35 mph
Speed is now: 30 mph
Speed is now: 25 mph
Speed is now: 20 mph


        Printout from Exercise 19
________________________________________________________

   14   14   14   14   14   15   15   16   16   16
   17   17   18   19   19   19   19   20   20   20
   21   21   21   21   22   22   22   22   22   22
   23   23   24   24   25   25   25   25   26   26
   26   26   26   26   27   27   27   28   29   29
   29   29   30   30   30   30   30   30   30   31
   31   31   31   32   32   33   34   34   34   36
   36   36   36   37   37   39   39   39   40   40
   40   41   41   41   41   41   43   44   44   44
   44   45   45   45   46   46   47   47   47   47

        Printout from Exercise 21 - 23
________________________________________________________

The address is: 0x6efae0
The value is: 2.5


        Printout from Exercise 24 - 25
________________________________________________________

how big is your array? 150
   19   19   29   24   40   16   17   42   33   28
   37   29   44   46   28   29   33   15   45   36
   30   44   29   18   31   29   39   16   33   30
   28   42   23   46   40   44   45   47   35   29
   35   27   23   27   33   15   25   14   27   38
   44   38   14   22   39   44   30   33   42   37
   16   15   30   15   40   37   35   43   46   20
   37   46   38   18   20   31   26   25   30   18
   33   22   33   41   14   38   46   28   19   39
   36   15   46   23   39   21   44   35   47   42
   43   14   45   23   44   27   43   18   32   23
   16   40   44   17   43   42   47   31   47   43
   39   37   20   31   16   20   42   36   24   22
   22   29   19   38   41   39   18   40   22   32
   34   19   14   23   16   17   41   20   28   33

        Printout from Exercise 26
________________________________________________________

   14   14   14   14   14   15   15   15   15   15
   16   16   16   16   16   16   17   17   17   18
   18   18   18   18   19   19   19   19   19   20
   20   20   20   20   21   22   22   22   22   22
   23   23   23   23   23   23   24   24   25   25
   26   27   27   27   27   28   28   28   28   28
   29   29   29   29   29   29   29   30   30   30
   30   30   31   31   31   31   32   32   33   33
   33   33   33   33   33   33   34   35   35   35
   35   36   36   36   37   37   37   37   37   38
   38   38   38   38   39   39   39   39   39   39
   40   40   40   40   40   41   41   41   42   42
   42   42   42   42   43   43   43   43   43   44
   44   44   44   44   44   44   44   45   45   45
   46   46   46   46   46   46   47   47   47   47

        Printout from Exercise 28
________________________________________________________

Honda          2013   6000      Blue
Lexus          2010   4000      Red
Corvette       2013   10000     Yellow
Honda          2008   2000      Silver
Toyota         2013   3000      Brown
Porsche        2012   12000     Yellow
Nissan         2000   1000      Silver
Mercedes       2016   62000     White

Mercedes       2016   62000     White
Porsche        2012   12000     Yellow
Corvette       2013   10000     Yellow
Honda          2013   6000      Blue
Lexus          2010   4000      Red
Toyota         2013   3000      Brown
Honda          2008   2000      Silver
Nissan         2000   1000      Silver

Process returned 0 (0x0)   execution time : 4.220 s
Press any key to continue.


*/

