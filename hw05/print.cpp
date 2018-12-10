/*
 * print.cpp
 *
 *  Created on: Feb 27, 2017
 *      Author: Brian Clinkenbeard
 */

#include "header.h"
#include "triangle.h"
#include "square.h"

/* 2. */
void printPerimeter(Shape &s)
{
	std::cout << "Perimeter: " << s.calcPerimeter() << std::endl;
}

void printArea(Shape &s)
{
	std::cout << "Area: " << s.calcArea() << std::endl;
}
