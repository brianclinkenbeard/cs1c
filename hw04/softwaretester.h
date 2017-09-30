/*
 * softwaretester.h
 *
 *  Created on: Feb 21, 2017
 *      Author: Brian Clinkenbeard
 */

#ifndef SOFTWARETESTER_H_
#define SOFTWARETESTER_H_

#include "employee.h"

/* 7. */
namespace brian {

/* 1. */
class SoftwareTester: public Employee {
public:
	SoftwareTester();
	SoftwareTester(string, int, string, int, string, string, int, int, int, int, char[], char[], char[], int);
	SoftwareTester(const SoftwareTester&); /* 3. */
	/* accessors */
	void print();
	/* mutators */
	/* 2. */
	void setAddress(char[]);
	void setCity(char[]);
	void setState(char[]);
	void setZip(int);
	void deepCopy(const SoftwareTester&);
	/* destructor */
	~SoftwareTester();
private:
	char *address; /* 1. a. */
	char *city;    /* 1. b. */
	char *state;   /* 1. c. */
	int zip;       /* 1. d. */
};

} /* namespace brian */

#endif /* SOFTWARETESTER_H_ */
