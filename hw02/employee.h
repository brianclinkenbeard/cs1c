/*
 * employee.h
 *
 *  Created on: Feb 5, 2017
 *      Author: Brian Clinkenbeard
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include "header.h"

class Employee {
public:
	Employee();
	Employee(string, int, string, int, string, string, int, int, int, int);
	/* accessors */
	string getName();
	int getID();
	string getPhone();
	int getAge();
	string getGender();
	string getTitle();
	int getSalary();
	/* mutators */
	void setName(string);
	void setID(int);
	void setPhone(string);
	void setAge(int);
	void setTitle(string);
	void setSalary(int);
	void setHireDate(int, int, int);
	/* print */
	virtual void print();
private:
	string name;
	int id;
	string phone;
	int age;
	string gender, title;
	int salary;
	Date hireDate;
};

#endif /* EMPLOYEE_H_ */
