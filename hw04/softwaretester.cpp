/*
 * softwaretester.cpp
 *
 *  Created on: Feb 21, 2017
 *      Author: Brian Clinkenbeard
 */

#include "softwaretester.h"

namespace brian {

SoftwareTester::SoftwareTester() : Employee()
{
	cout << "Calling default constructor." << endl;
	address = new char[17];
	strcpy(address, "1234 Main Avenue");
	city = new char[14];
	strcpy(city, "Laguna Niguel");
	state = new char[3];
	strcpy(state, "CA");
	zip = 92677;
}

SoftwareTester::SoftwareTester(string initName, int initID, string initPhone,
		int initAge, string initGender, string initTitle, int initSalary,
		int initMonth, int initDay, int initYear, char initAddress[],
		char initCity[], char initState[], int initZip) :
		Employee(initName, initID, initPhone, initAge, initGender,    /* call employee constructor */
				initTitle, initSalary, initMonth, initDay, initYear),
				zip(initZip) /* initialization list */
{
			cout << "Calling non-default constructor." << endl;
			address = NULL;
			city = NULL;
			state = NULL;
			setAddress(initAddress);
			setCity(initCity);
			setState(initState);
}


/* 3. */
SoftwareTester::SoftwareTester(const SoftwareTester &newTester)
{
	cout << "Calling copy constructor." << endl;
	/* set pointers to NULL for deletion in mutators */
	address = NULL;
	city = NULL;
	state = NULL;
	setAddress(newTester.address);
	setCity(newTester.city);
	setState(newTester.state);
	setZip(newTester.zip);
	setName(newTester.getName());
	setID(newTester.getID());
	setPhone(newTester.getPhone());
	setAge(newTester.getAge());
	setTitle(newTester.getTitle());
	setSalary(newTester.getSalary());
	setHireDate(newTester.getHireDate().getMonth(), newTester.getHireDate().getDay(), newTester.getHireDate().getYear());
}

/* 5. */
void SoftwareTester::print()
{
	Employee::print();
	cout << "Address: " << address << ", " << city << ", " << state << " " << zip << endl;
}

/* 2. */
void SoftwareTester::setAddress(char newAddress[])
{
	delete address;
	address = new char[strlen(newAddress) + 1];
	strcpy(address, newAddress);
}

void SoftwareTester::setCity(char newCity[])
{
	delete city;
	city = new char[strlen(newCity) + 1];
	strcpy(city, newCity);
}

void SoftwareTester::setState(char newState[])
{
	delete state;
	state = new char[strlen(newState) + 1];
	strcpy(state, newState);
}

void SoftwareTester::setZip(int newZip)
{
	zip = newZip;
}

/* 4. */
void SoftwareTester::deepCopy(const SoftwareTester &newTester)
{
	setAddress(newTester.address);
	setCity(newTester.city);
	setState(newTester.state);
	setZip(newTester.zip);
	setName(newTester.getName());
	setID(newTester.getID());
	setPhone(newTester.getPhone());
	setAge(newTester.getAge());
	setTitle(newTester.getTitle());
	setSalary(newTester.getSalary());
	setHireDate(newTester.getHireDate().getMonth(), newTester.getHireDate().getDay(), newTester.getHireDate().getYear());
}

SoftwareTester::~SoftwareTester()
{
	delete address;
	delete city;
	delete state;
}

} /* namespace brian */
