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

Employee::Employee(std::string initName, int initID, std::string initPhone, int initAge,
		std::string initGender, std::string initTitle, int initSalary, int initMonth, int initDay, int initYear)
		: name(initName), id(initID), phone(initPhone), age(initAge), gender(initGender),
		title(initTitle), salary(initSalary), hireDate(Date(initMonth, initDay, initYear)) {}

std::string Employee::getName() const
{
    return name;
}

int Employee::getID() const
{
    return id;
}

std::string Employee::getPhone() const
{
    return phone;
}

int Employee::getAge() const
{
    return age;
}

std::string Employee::getTitle() const
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

void Employee::setName(std::string initName)
{
    name = initName;
}

void Employee::setID(int initID)
{
    id = initID;
}

void Employee::setPhone(std::string initPhone)
{
    phone = initPhone;
}

void Employee::setAge(int initAge)
{
    age = initAge;
}

void Employee::setTitle(std::string initTitle)
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

/* 1. */
bool isEquals(const Employee &first, const Employee &second)
{
	return first.age == second.age;
}

/* 2. */
bool operator==(const Employee &first, const Employee &second)
{
	return first.age == second.age;
}

/* 3. */
void Employee::ageBy(int years)
{
	age += years;
}

/* 4. */
Employee& Employee::operator+=(int years)
{
	age += years;
	return *this;
}

/* 5. */
std::ostream& operator<<(std::ostream& os, const Employee& output)
{
	os << "Name: " << output.name << std::endl
			<< "ID: " << output.id << std::endl
			<< "Phone Number: " << output.phone << std::endl
			<< "Age: " << output.age << std::endl
			<< "Gender: " << output.gender << std::endl
			<< "Title: " << output.title << std::endl
			<< "Salary: " << output.salary << std::endl
			<< "Hire Date: " << output.hireDate.getMonth() << "/" << output.hireDate.getDay() << "/" << output.hireDate.getYear() << std::endl;
}

std::istream& operator>>(std::istream& is, Employee& input)
{
	std::cout << "Enter the employee age: ";
	is >> input.age;
}


void Employee::print()
{
	std::cout << "Name: " << name << std::endl
			<< "ID: " << id << std::endl
			<< "Phone Number: " << phone << std::endl
			<< "Age: " << age << std::endl
			<< "Gender: " << gender << std::endl
			<< "Title: " << title << std::endl
			<< "Salary: " << salary << std::endl
			<< "Hire Date: " << hireDate.getMonth() << "/" << hireDate.getDay() << "/" << hireDate.getYear() << std::endl;
}
