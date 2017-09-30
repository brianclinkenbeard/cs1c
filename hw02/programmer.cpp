/*
 * programmer.cpp
 *
 *  Created on: Feb 6, 2017
 *      Author: Brian Clinkenbeard
 */

#include "programmer.h"

Programmer::Programmer() : Employee()
{
	dptNumber = 5432100;
	supervisor = "Smith";
	salaryInc = 7;
	cpp = true;
	java = false;
}

Programmer::Programmer(string initName, int initID, string initPhone,
		int initAge, string initGender, string initTitle, int initSalary,
		int initMonth, int initDay, int initYear, int initDptNumber,
		string initSupervisor, int initSalaryInc, bool initCPP, bool initJava) :
		Employee(initName, initID, initPhone, initAge, initGender,    /* call employee constructor */
				initTitle, initSalary, initMonth, initDay, initYear),
				dptNumber(initDptNumber), supervisor(initSupervisor), /* initialization list */
				salaryInc(initSalaryInc), cpp(initCPP), java(initJava) {}

int Programmer::getDptNumber()
{
    return dptNumber;
}

string Programmer::getSupervisor()
{
    return supervisor;
}

int Programmer::getSalaryInc()
{
    return salaryInc;
}

bool Programmer::getCPP()
{
    return cpp;
}

bool Programmer::getJava()
{
    return java;
}

void Programmer::setDptNumber(int initDptNumber)
{
    dptNumber = initDptNumber;
}

void Programmer::setSupervisor(string initSupervisor)
{
    supervisor = initSupervisor;
}

void Programmer::setSalaryInc(int initSalaryInc)
{
    salaryInc = initSalaryInc;
}

void Programmer::setCPP(bool initCPP)
{
    cpp = initCPP;
}

void Programmer::setJava(bool initJava)
{
    java = initJava;
}

void Programmer::pPrint()
{
    print(); /* call parent print */

    string cppString, javaString;

    /* print bools as yes/no */
    cpp == true ? cppString = "Yes" : cppString = "No";
    java == true ? javaString = "Yes" : javaString = "No";

    cout << "Department Number: " << dptNumber << endl
    		<< "Supervisor: " << supervisor << endl
			<< "Last Salary Increase: " << salaryInc << "%" << endl
			<< "C++ Knowledge: " << cppString << endl
			<< "Java Knowledge: " << javaString << endl;
}
