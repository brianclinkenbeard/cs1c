/*
 * programmer.h
 *
 *  Created on: Feb 6, 2017
 *      Author: Brian Clinkenbeard
 */

#ifndef PROGRAMMER_H_
#define PROGRAMMER_H_

#include "employee.h"

class Programmer: public Employee {
public:
	Programmer();
	Programmer(string, int, string, int, string, string, int, int, int, int, int, string, int, bool, bool);
	int getDptNumber();
	string getSupervisor();
	int getSalaryInc();
	bool getCPP();
	bool getJava();
	void setDptNumber(int);
	void setSupervisor(string);
	void setSalaryInc(int);
	void setCPP(bool);
	void setJava(bool);
	void pPrint();
private:
	int dptNumber;
	string supervisor;
	int salaryInc;
	bool cpp, java;
};

#endif /* PROGRAMMER_H_ */
