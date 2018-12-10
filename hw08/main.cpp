/*
 * main.cpp
 *
 *  Created on: Mar 6, 2017
 *      Author: Brian Clinkenbeard
 */

#include "employee.h"
#include "header.h"

int main()
{
	/* 1. */
	std::cout << "Enter an integer: ";
	int age1;
	std::cin >> age1;
	std::cout << "Asserting that the first integer is greater than zero." << std::endl;
	assert(age1 > 0);
	std:: cout << "Enter another integer: ";
	int age2;
	std::cin >> age2;
	std::cout << "Asserting that the second integer is less than 100." << std::endl;
	assert(age2 < 100);

	/* 2. */
	std::cout << "Enter an employee age: ";
	int employeeAge;
	std::cin >> employeeAge;
	/* a. */
	std::cout << "Creating employee using custom age..." << std::endl;
	/* c. */
	Employee customEmployee("Test Employee", 12345, "310-555-5555", employeeAge, "M", "Comedian", 70123, 5, 8, 2015);
	/* b. */
	std::cout << "Enter employee salary: ";
	int employeeSal;
	std::cin >> employeeSal;
	std::cout << "Creating employee using custom salary..." << std::endl;
	/* c. */
	Employee customEmployee2("Test Employee 2", 54321, "555-555-5555", 25, "F", "Comedian", employeeSal, 5, 8, 2015);

	return 0;
}
