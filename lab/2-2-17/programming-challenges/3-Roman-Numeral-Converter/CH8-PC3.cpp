/*Write a program that displays the Roman Numeral equivalent of any decimal number between 1 and 20
Store the Roman Numerals in an Array of strings, and the decimal number should be used to locate the array
element holding the Roman numeral equivalent. Should contain a loop that breaks when 0 is entered*/

#include <iomanip>
#include <iostream>
#include <string>


int main()
{
	int decimal=1;
	std::string roman[20] = {"I","II","III","IV","V","VI","VII","VIII","IX","X","XI",
							 "XII","XIII","XIV","XV","XVI","XVII","XVIII","XIX","XX"};
	
	while (true) {


		std::cout << "Please input the number you would like to convert to Roman Numerals (enter 0 to quit): ";
		std::cin >> decimal;
		//quit the program if the user enters a 0 or exceeds 20
		if (decimal < 1 && decimal > 20)
			break;
		std::cout <<"Your Decimal converts to: "<< roman[decimal - 1] << std::endl;

	}

    return 0;
}

