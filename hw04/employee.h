/*
 * employee.h
 *
 *  Created on: Feb 5, 2017
 *      Author: Brian Clinkenbeard
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <iostream>
#include <string>
#include <cstring>
#include "date.h"
using namespace std;

class Employee {
public:
	Employee();
	Employee(string, int, string, int, string, string, int, int, int, int);
	/* accessors */
	string getName() const;
	int getID() const;
	string getPhone() const;
	int getAge() const;
	string getGender() const;
	string getTitle() const;
	int getSalary() const;
	Date getHireDate() const;
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
