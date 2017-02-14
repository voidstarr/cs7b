/*
*
*	Created by : DeekHead
*	Feb 14, 2017
*	11:50:40 AM
*/
#include <iostream>
#include "Item.h"

int main(){

	int itemNum;
	int quantity;
	double cost;
	std::string name;

	std::cout << "Enter the item name: ";
	std::getline(std::cin, name);
	std::cout << "\nEnter the item number: ";
	std::cin >> itemNum;
	std::cout << "\nEnter the quantity of this item: ";
	std::cin >> quantity;
	std::cout << "\nEnter the cost of this item: $";
	std::cin >> cost;

	Item dankBerries(name, itemNum, quantity, cost);

	double totalCost = dankBerries.TotalCost();

	std::cout << "\nThe total cost of " << name << " is $" << totalCost;

}
