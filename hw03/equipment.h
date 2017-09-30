/*
 * equipment.h
 *
 *  Created on: Feb 14, 2017
 *      Author: Brian Clinkenbeard
 */

/* 5. */
#ifndef EQUIPMENT_H_
#define EQUIPMENT_H_

#include "header.h"

/* 4. */
namespace brian {

const double TAX = 0.0825;

class Equipment {
public:
	Equipment();
	Equipment(std::string, int);
	virtual ~Equipment();
	std::string getName();
	int getQuantity();
	double getCost();
	double getTotal();
	void sell(int);
private:
	std::string name;
	int quantity;
	double cost;
};

} /* namespace brian */

#endif /* EQUIPMENT_H_ */
