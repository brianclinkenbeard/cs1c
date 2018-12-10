/*
 * square.h
 *
 *  Created on: Feb 27, 2017
 *      Author: Brian Clinkenbeard
 */

#ifndef SQUARE_H_
#define SQUARE_H_

#include "shape.h"

class Square: public Shape {
public:
	Square(double);
	double calcPerimeter();
	double calcArea();
private:
	double side;
};

#endif /* SQUARE_H_ */
