/*
 * main.cpp
 *
 *  Created on: Feb 5, 2017
 *      Author: Brian Clinkenbeard
 */

#include "header.h"
#include "employee.h"
#include "programmer.h"
#include "softwarearchitect.h"

int main()
{
	cout << "Default employee:" << endl;
	Employee defaultEmployee;
	defaultEmployee.print();
	cout << endl << "Custom employee:" << endl;
	Employee customEmployee("Barrack Obama", 12346, "310-555-5555", 51, "M", "Comedian", 70123, 5, 8, 2015);
	customEmployee.print();
	cout << endl << "Changing default employee data:" << endl;
	defaultEmployee.setName("Paul Ryan");
	defaultEmployee.setID(87654);
	defaultEmployee.setPhone("703-703-1234");
	defaultEmployee.setAge(37);
	defaultEmployee.setTitle("Talk Show Host");
	defaultEmployee.setSalary(900000);
	defaultEmployee.setHireDate(12, 25, 2014);
	defaultEmployee.print();

	cout << endl << "Default programmer:" << endl;
	Programmer defaultProgrammer;
	defaultProgrammer.pPrint();
	cout << endl << "Custom programmer:" << endl;
	Programmer customProgrammer("Sam Software", 54321, "819-123-4567", 21, "M", "Programmer", 22300, 12, 24, 2011,
			5432122, "Joe Boss", 4, true, false);
	customProgrammer.pPrint();
	cout << endl << "Changing default programmer:" << endl;
	defaultProgrammer.setName("Mr Coder"); /* cannot change gender */
	defaultProgrammer.setDptNumber(6543222);
	defaultProgrammer.setSalaryInc(7);
	defaultProgrammer.setJava(true);
	defaultProgrammer.pPrint();

	cout << endl << "Default software architect:" << endl;
	SoftwareArchitect defaultArchitect;
	defaultArchitect.sPrint();
	cout << endl << "Custom software architect:" << endl;
	SoftwareArchitect customArchitect("Alex Arch", 88888, "819-123-4444", 31, "M", "Architect", 32300, 12, 24, 2009,
			5434222, "Big Boss", 5, 4);
	customArchitect.sPrint();
	cout << endl << "Changing default architect:" << endl;
	defaultArchitect.setName("Mr Designer");
	defaultArchitect.setID(88888);
	defaultArchitect.setPhone("310-555-8888");
	defaultArchitect.setAge(38);
	defaultArchitect.setSalary(870123);
	defaultArchitect.setHireDate(2, 8, 2003);
	defaultArchitect.setDptNumber(6543422);
	defaultArchitect.setSalaryInc(8);
	defaultArchitect.setYearsExp(11);
	defaultArchitect.sPrint();
}
