/*
 * equipment.cpp
 *
 *  Created on: Feb 14, 2017
 *      Author: Brian Clinkenbeard
 */

#include "equipment.h"

namespace brian {

Equipment::Equipment()
{
	name = "Nike basketball shoes";
	quantity = 1;
	cost = 159.99;
}

Equipment::Equipment(std::string initName, int initQuantity) : name(initName), quantity(initQuantity)
{
	/* if/else set since no switch cases for strings */
	if (name == "Nike basketball shoes") {
		cost = 159.99;
	} else if (name == "Under Armour T-shirt") {
		cost = 25.99;
	} else if (name == "Brooks running shoes") {
		cost = 119.44;
	} else if (name == "Asics running shoes") {
		cost = 165.88;
	} else if (name == "Under Armour shorts") {
		cost = 45.77;
	} else {
		/* invalid name */
		cost = 0;
		std::cout << "Error: Invalid equipment name." << std::endl;
	}
}

Equipment::~Equipment()
{
	// TODO Auto-generated destructor stub
}

std::string Equipment::getName()
{
	return name;
}

int Equipment::getQuantity()
{
	return quantity;
}

double Equipment::getCost()
{
	return cost;
}

double Equipment::getTotal()
{
	return getCost() * getQuantity();
}

void Equipment::sell(int amount)
{
	quantity -= amount;
}

} /* namespace brian */
