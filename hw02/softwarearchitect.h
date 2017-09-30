/*
 * softwarearchitect.h
 *
 *  Created on: Feb 6, 2017
 *      Author: Brian Clinkenbeard
 */

#ifndef SOFTWAREARCHITECT_H_
#define SOFTWAREARCHITECT_H_

#include "employee.h"

class SoftwareArchitect: public Employee {
public:
	SoftwareArchitect();
	SoftwareArchitect(string, int, string, int, string, string, int, int, int, int, int, string, int, int);
	int getDptNumber();
	string getSupervisor();
	int getSalaryInc();
	int getYearsExp();
	void setDptNumber(int);
	void setSupervisor(string);
	void setSalaryInc(int);
	void setYearsExp(int);
	void sPrint();
private:
	int dptNumber;
	string supervisor;
	int salaryInc, yearsExp;
};

#endif /* SOFTWAREARCHITECT_H_ */
