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

class Employee {
public:
	Employee();
	Employee(std::string, int, std::string, int, std::string, std::string, int, int, int, int);
	/* accessors */
	std::string getName() const;
	int getID() const;
	std::string getPhone() const;
	int getAge() const;
	std::string getGender() const;
	std::string getTitle() const;
	int getSalary() const;
	Date getHireDate() const;
	/* mutators */
	void setName(std::string);
	void setID(int);
	void setPhone(std::string);
	void setAge(int);
	void setTitle(std::string);
	void setSalary(int);
	void setHireDate(int, int, int);
	/* friends */
	friend bool isEquals(const Employee&, const Employee&);   /* 1. */
	friend bool operator==(const Employee&, const Employee&); /* 2. */
	friend std::ostream& operator<<(std::ostream&, const Employee&);
	friend std::istream& operator>>(std::istream&, Employee&);
	/* add to age */
	void ageBy(int);          /* 3. */
	Employee& operator+=(int); /* 4. */
	/* print */
	virtual void print();
private:
	std::string name;
	int id;
	std::string phone;
	int age;
	std::string gender, title;
	int salary;
	Date hireDate;
};

#endif /* EMPLOYEE_H_ */
