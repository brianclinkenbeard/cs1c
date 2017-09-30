/*
 * date.cpp
 *
 *  Created on: Feb 5, 2017
 *      Author: Brian Clinkenbeard
 */

#include "date.h"

Date::Date() {}

Date::Date(int initMonth, int initDay, int initYear)
{
	setMonth(initMonth);
	setDay(initDay);
	setYear(initYear);
}

int Date::getMonth()
{
	return month;
}

int Date::getDay()
{
	return day;
}

int Date::getYear()
{
	return year;
}

void Date::setMonth(int newMonth)
{
	if (newMonth >= 1 && newMonth <= 12) {
		month = newMonth;
	}
}

void Date::setDay(int newDay)
{
	if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && newDay <= 31) {
		day = newDay;
	} else if ((month == 4 || month == 6 || month == 9 || month == 11) && newDay <= 30) {
		day = newDay;
	} else if (month == 2 && newDay <= 28) {
		day = newDay;
	}
}

void Date::setYear(int newYear)
{
	year = newYear;
}
