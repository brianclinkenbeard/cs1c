/*
 * main.cpp
 *
 *  Created on: Feb 5, 2017
 *      Author: Brian Clinkenbeard
 */

#include "header.h"

int main()
{
	cout << "Default tester:" << endl;
	brian::SoftwareTester defaultTester;
	defaultTester.print();

	/* 6. test change methods */
	cout << endl << "Testing change methods:" << endl;
	cout << "Changing address..." << endl;
	defaultTester.setAge(34);
	/* 2. */
	defaultTester.setAddress("123 Newlane");
	defaultTester.setCity("Albuquerque");
	defaultTester.setState("NM");
	defaultTester.print();

	cout << endl << "Tests:" << endl;
	cout << "1. Pass by copy:" << endl;
	passByCopy(defaultTester);
	cout << "2. Pass by reference:" << endl;
	passByReference(defaultTester);
	cout << "3. Return by copy:" << endl;
	returnByCopy(defaultTester);
	cout << "4. Return by reference:" << endl;
	returnByReference(defaultTester);
	cout << "5. Copy initialization:" << endl;
	cout << "Creating copy of the changed tester..." << endl;
	brian::SoftwareTester newTester = defaultTester;
	cout << "6. Deep copy test:" << endl;
	cout << "Creating custom tester..." << endl;
	brian::SoftwareTester customTester("Mary Algebra", 76309, "312-555-5555", 19, "F", "Senior tester", 7000, 5, 8, 2015,
			"3333 Marguerite Pkwy", "Mission Viejo", "CA", 92646);
	cout << "Value of custom tester:" << endl;
	customTester.print();
	cout << "Creating new tester..." << endl;
	brian::SoftwareTester deepTest;
	cout << "Value of new tester before deep copy:" << endl;
	deepTest.print();
	cout << "Deep copying custom tester to new tester..." << endl;
	deepTest.deepCopy(customTester);
	cout << "Value of new tester after deep copy:" << endl;
	deepTest.print();

	return 0;
}
