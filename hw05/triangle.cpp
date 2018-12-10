/*
 * triangle.cpp
 *
 *  Created on: Feb 27, 2017
 *      Author: Brian Clinkenbeard
 */

#include "header.h"
#include "triangle.h"

Triangle::Triangle(double a, double b, double c)
{
	if (a > 0 && b > 0 && c > 0) {
		if (a + b > c && a + c > b && b + c > a) {
			side1 = a;
			side2 = b;
			side3 = c;
		} else {
			std::cout << "Sides must form a triangle." << std::endl;
			side1 = 0;
			side2 = 0;
			side3 = 0;
		}
	} else {
		std::cout << "All sides must be greater than 0." << std::endl;
		side1 = 0;
		side2 = 0;
		side3 = 0;
	}

}

double Triangle::calcPerimeter()
{
	return side1 + side2 + side3;
}

double Triangle::calcArea()
{
	double pHalf = calcPerimeter() / 2;
	return std::sqrt(pHalf * (pHalf - side1) * (pHalf - side2) * (pHalf - side3));
}
