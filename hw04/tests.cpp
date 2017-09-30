/*
 * tests.cpp
 *
 *  Created on: Feb 22, 2017
 *      Author: Brian Clinkenbeard
 */

#include "softwaretester.h"

/* 1. */
void passByCopy(brian::SoftwareTester test) {}

/* 2. */
void passByReference(brian::SoftwareTester &test)
{
	cout << "Pass by reference function called." << endl;
}

/* 3. */
brian::SoftwareTester returnByCopy(brian::SoftwareTester &test)
{
	return test;
}

/* 4. */
brian::SoftwareTester* returnByReference(brian::SoftwareTester &test)
{
	cout << "Return by reference function called." << endl;
	return &test;
}
