/*
 * employee.cpp
 *
 *  Created on: Feb 5, 2017
 *      Author: Brian Clinkenbeard
 */

#include "employee.h"

Employee::Employee()
{
	name = "Joe Calculus";
	id = 64879;
	phone = "945-555-1234";
	age = 22;
	gender = "M";
	title = "Junior tester";
	salary = 40000;
	hireDate = Date(7, 31, 2016);
}

Employee::Employee(string initName, int initID, string initPhone, int initAge,
		string initGender, string initTitle, int initSalary, int initMonth, int initDay, int initYear)
		: name(initName), id(initID), phone(initPhone), age(initAge), gender(initGender),
		title(initTitle), salary(initSalary), hireDate(Date(initMonth, initDay, initYear)) {}

string Employee::getName() const
{
    return name;
}

int Employee::getID() const
{
    return id;
}

string Employee::getPhone() const
{
    return phone;
}

int Employee::getAge() const
{
    return age;
}

string Employee::getTitle() const
{
    return title;
}

int Employee::getSalary() const
{
    return salary;
}

Date Employee::getHireDate() const
{
    return hireDate;
}

void Employee::setName(string initName)
{
    name = initName;
}

void Employee::setID(int initID)
{
    id = initID;
}

void Employee::setPhone(string initPhone)
{
    phone = initPhone;
}

void Employee::setAge(int initAge)
{
    age = initAge;
}

void Employee::setTitle(string initTitle)
{
    title = initTitle;
}

void Employee::setSalary(int initSalary)
{
    salary = initSalary;
}

void Employee::setHireDate(int initMonth, int initDay, int initYear)
{
    hireDate = Date(initMonth, initDay, initYear);
}


void Employee::print()
{
	cout << "Name: " << name << endl
			<< "ID: " << id << endl
			<< "Phone Number: " << phone << endl
			<< "Age: " << age << endl
			<< "Gender: " << gender << endl
			<< "Title: " << title << endl
			<< "Salary: " << salary << endl
			<< "Hire Date: " << hireDate.getMonth() << "/" << hireDate.getDay() << "/" << hireDate.getYear() << endl;
}
