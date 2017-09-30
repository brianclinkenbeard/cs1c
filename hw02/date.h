/*
 * date.h
 *
 *  Created on: Feb 5, 2017
 *      Author: Brian Clinkenbeard
 */

#ifndef DATE_H_
#define DATE_H_

class Date {
public:
	Date();
	Date(int, int, int);
	int getMonth();
	int getDay();
	int getYear();
	void setMonth(int);
	void setDay(int);
	void setYear(int);
private:
	int month, day, year;
};

#endif /* DATE_H_ */
