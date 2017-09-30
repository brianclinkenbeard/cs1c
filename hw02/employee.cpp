/*
 * employee.cpp
 *
 *  Created on: Feb 5, 2017
 *      Author: Brian Clinkenbeard
 */

#include "employee.h"

Employee::Employee()
{
	name = "Donald Trump";
	id = 12345;
	phone = "949-555-1234";
	age = 40;
	gender = "M";
	title = "Comedian";
	salary = 100000;
	hireDate = Date(8, 31, 2014);
}

Employee::Employee(string initName, int initID, string initPhone, int initAge,
		string initGender, string initTitle, int initSalary, int initMonth, int initDay, int initYear)
		: name(initName), id(initID), phone(initPhone), age(initAge), gender(initGender),
		title(initTitle), salary(initSalary), hireDate(Date(initMonth, initDay, initYear)) {}

string Employee::getName()
{
    return name;
}

int Employee::getID()
{
    return id;
}

string Employee::getPhone()
{
    return phone;
}

int Employee::getAge()
{
    return age;
}

string Employee::getTitle()
{
    return title;
}

int Employee::getSalary()
{
    return salary;
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
