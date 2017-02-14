/*
 * Item.cpp
 *
 *  Created on: Feb 14, 2017
 *      Author: DeekHead
 */

#include "Item.h"

Item::Item() {
	itemNum = 0;
	quantity = 0;
	cost = 0.0;
	totalCost = 0.0;

}

Item::Item(std::string nam, int num, int quant, double amount){

	if(num == 0){
		std::cout << "\nRe-enter the item number: ";
		std::cin >> num;
		setItemNumber(num);
		setQuantity(quant);
		setCost(amount);
		setItemName(name);
	}
	else if(quant < 0){
		std::cout << "\nRe-enter the item quantity: ";
		std::cin >> quant;
		setItemNumber(num);
		setQuantity(quant);
		setCost(amount);
		setItemName(name);
	}
	else if(amount < 0){
		std::cout << " \nRe-enter the items cost: ";
		std::cin >> amount;
		setItemNumber(num);
		setQuantity(quant);
		setCost(amount);
		setItemName(name);
	}
	else{
		setItemNumber(num);
		setQuantity(quant);
		setCost(amount);
		setItemName(name);
	}
}

void Item::setItemName(std::string nam){
	name = nam;
}

void Item::setItemNumber(int num){
	itemNum = num;
}

void Item::setQuantity(int quant){
	quantity = quant;
}

void Item::setCost(double amount){
	cost = amount;
}

std::string Item::ItemName(){
	return name;
}

int Item::ItemNumber(){
	return itemNum;
}

int Item::Quantity(){
	return quantity;
}

double Item::Cost(){
	return cost;
}

void Item::setTotalCost(){

	totalCost = quantity*cost;

}

double Item::TotalCost(){

	setTotalCost();

	return totalCost;
}
Item::~Item() {}

