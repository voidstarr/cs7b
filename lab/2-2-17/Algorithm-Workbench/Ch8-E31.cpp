//The arrays array1 and array2 each hold 25 integer elements. Write code that copies the values in array1 to array2
//

#include <iomanip>

#include <iostream>



int main()
{
	//declaring both arrays with 25 elements
	const int MAX = 25;
	int array1[MAX] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
	int array2[MAX];

	for (int i = 0; i < MAX; i++) {
		array2[i] = array1[i];
	}

	for (int i = 0; i < MAX; i++) {
		std::cout << array2[i] << std::endl;
	}

    return 0;
	//In regards to problem 32, the program will print the correct sum for the first array but since they 
	//use the same accumulator for both, it will result in the sum for the second array being added to the
	//first.
}

