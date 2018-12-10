/*
 * main.cpp
 *
 *  Created on: Feb 27, 2017
 *      Author: Brian Clinkenbeard
 */

#include "square.h"
#include "triangle.h"
#include "header.h"

int main(int argc, char *argv[])
{
	/* 4. */
	std::cout << "Enter the side length of the square: ";
	double squareSide;
	std::cin >> squareSide;
	std::cout << "Enter the 3 lengths of the triangle: ";
	double side1, side2, side3;
	std::cin >> side1;
	std::cin >> side2;
	std::cin >> side3;
	/* 3. */
	Square sq(squareSide);
	Triangle tri(side1, side2, side3);
	/* 6. */
	std::cout << "Square with side length of " << squareSide << ": " << std::endl;
	printPerimeter(sq);
	printArea(sq);
	std::cout << "Triangle with sides lengths of " << side1 << ", " << side2 << ", and " << side3 << ": "<< std::endl;
	printPerimeter(tri);
	printArea(tri);

	/* Part 2 */
	if (argc == 3) {
		/* 2. */
		std::cout << "Name: " << argv[1] << " " << argv[2] << std::endl;
		/* 3. */
		std::cout << "Second character of first and last name: " << argv[1][1] << ", " << argv[2][1] << std::endl;
	} else {
		std::cout << "Invalid number of parameters." << std::endl;
	}

	return 0;
}
