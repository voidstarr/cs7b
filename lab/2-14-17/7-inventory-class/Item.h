/*
 * Item.h
 *
 *  Created on: Feb 14, 2017
 *      Author: DeekHead
 */

#pragma once
#include <iostream>
#include <string>

class Item {
private:
	int itemNum;
	int quantity;
	double cost;
	double totalCost;
	std::string name;

public:
	Item();
	Item(std::string, int, int, double);
	void setItemName(std::string);
	void setItemNumber(int);
	void setQuantity(int);
	void setCost(double);
	void setTotalCost();
	std::string ItemName();
	int ItemNumber();
	int Quantity();
	double Cost();
	double TotalCost();
	virtual ~Item();
};

