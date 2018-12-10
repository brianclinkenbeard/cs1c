/*
 * triangle.h
 *
 *  Created on: Feb 27, 2017
 *      Author: Brian Clinkenbeard
 */

#ifndef TRIANGLE_H_
#define TRIANGLE_H_

#include "shape.h"

class Triangle: public Shape {
public:
	Triangle(double, double, double);
	double calcPerimeter();
	double calcArea();
private:
	double side1, side2, side3;
};

#endif /* TRIANGLE_H_ */
