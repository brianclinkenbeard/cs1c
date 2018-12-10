/*
 * square.cpp
 *
 *  Created on: Feb 27, 2017
 *      Author: Brian Clinkenbeard
 */

#include "header.h"
#include "square.h"

Square::Square(double initSide)
{
	if (initSide > 0) {
		side = initSide;
	} else {
		std::cout << "Side length must be greater than 0." << std::endl;
	}
}

double Square::calcPerimeter()
{
	return side * 4;
}

double Square::calcArea()
{
	return side * side;
}
