/*
 * softwarearchitect.cpp
 *
 *  Created on: Feb 6, 2017
 *      Author: Brian Clinkenbeard
 */

#include "softwarearchitect.h"

SoftwareArchitect::SoftwareArchitect() : Employee()
{
	dptNumber = 9923888;
	supervisor = "Jim Joe";
	salaryInc = 2;
	yearsExp = 3;
}

SoftwareArchitect::SoftwareArchitect(string initName, int initID, string initPhone,
		int initAge, string initGender, string initTitle, int initSalary,
		int initMonth, int initDay, int initYear, int initDptNumber,
		string initSupervisor, int initSalaryInc, int initYearsExp) :
		Employee(initName, initID, initPhone, initAge, initGender,    /* call employee constructor */
				initTitle, initSalary, initMonth, initDay, initYear),
				dptNumber(initDptNumber), supervisor(initSupervisor), /* initialization list */
				salaryInc(initSalaryInc), yearsExp(initYearsExp) {}

int SoftwareArchitect::getDptNumber()
{
    return dptNumber;
}

string SoftwareArchitect::getSupervisor()
{
    return supervisor;
}

int SoftwareArchitect::getSalaryInc()
{
    return salaryInc;
}

int SoftwareArchitect::getYearsExp()
{
	return yearsExp;
}

void SoftwareArchitect::setDptNumber(int initDptNumber)
{
    dptNumber = initDptNumber;
}

void SoftwareArchitect::setSupervisor(string initSupervisor)
{
    supervisor = initSupervisor;
}

void SoftwareArchitect::setSalaryInc(int initSalaryInc)
{
    salaryInc = initSalaryInc;
}

void SoftwareArchitect::setYearsExp(int initYearsExp)
{
	yearsExp = initYearsExp;
}

void SoftwareArchitect::sPrint() {
    print(); /* call parent print */

    cout << "Department Number: " << dptNumber << endl
    		<< "Supervisor: " << supervisor << endl
			<< "Last Salary Increase: " << salaryInc << "%" << endl
			<< "Years Experience: " << yearsExp << endl;
}
