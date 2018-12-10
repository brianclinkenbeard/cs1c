/*
 * main.cpp
 *
 *  Created on: Mar 6, 2017
 *      Author: Brian Clinkenbeard
 */

#include "employee.h"

int main()
{
	Employee testEmployees[2];
	std::string boolString;
	/* 1. */
	std::cout << "Testing equality friend function..." << std::endl;
	isEquals(testEmployees[0], testEmployees[1]) ? boolString = "equal" : boolString = "not equal";
	std::cout << "Employees are " << boolString << std::endl;
	std::cout << "Changing first employee age..." << std::endl;
	testEmployees[0].setAge(44);
	isEquals(testEmployees[0], testEmployees[1]) ? boolString = "equal" : boolString = "not equal";
	std::cout << "Employees are " << boolString << std::endl;

	std::cout << std::endl;

	/* 2. */
	testEmployees[0].setAge(22); /* set age back to default */
	std::cout << "Testing equality operator..." << std::endl;
	testEmployees[0] == testEmployees[1] ? boolString = "equal" : boolString = "not equal";
	std::cout << "Employees are " << boolString << std::endl;
	std::cout << "Changing first employee age..." << std::endl;
	testEmployees[0].setAge(44);
	testEmployees[0] == testEmployees[1] ? boolString = "equal" : boolString = "not equal";
	std::cout << "Employees are " << boolString << std::endl;

	std::cout << std::endl;

	/* 3. */
	testEmployees[0].setAge(22); /* set age back to default */
	std::cout << "Original age: " << testEmployees[0].getAge() << std::endl;
	std::cout << "Testing age increase function..." << std::endl;
	testEmployees[0].ageBy(5);
	std::cout << "New age: " << testEmployees[0].getAge() << std::endl;

	std::cout << std::endl;

	/* 4. */
	std::cout << "Testing age increase operator..." << std::endl;
	testEmployees[0] += 10;
	std::cout << "New age: " << testEmployees[0].getAge() << std::endl;

	std::cout << std::endl;

	/* 5. */
	std::cout << "Testing employee output..." << std::endl;
	std::cout << testEmployees[0];
	std::cout << "Testing employee input..." << std::endl;
	std::cin >> testEmployees[0];
	std::cout << "New age: " << testEmployees[0].getAge() << std::endl;

	return 0;
}
