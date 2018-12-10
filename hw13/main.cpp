/*
 * main.cpp
 *
 *  Created on: May 2, 2017
 *      Author: Brian Clinkenbeard
 */

#include "header.h"

int main()
{
	/* 1. a. */
	time_t now = time(0);
	std::cout << "Current Time:\t\t\t\t\t" << ctime(&now);

	/* 1. b. */
	time_t later = now + (88 * 24 * 60 * 60);
	std::cout << "Time in 88 days:\t\t\t\t" << ctime(&later);

	/* 1. c. */
	struct tm jul;
	struct tm dec;

	/* custom values for mktime */
	jul.tm_mon = 7 - 1;
	jul.tm_mday = 25;
	jul.tm_year = 2017 - 1900;
	jul.tm_hour = 0;
	jul.tm_min = 0;
	jul.tm_sec = 0;
	dec.tm_mon = 12 - 1;
	dec.tm_mday = 24;
	dec.tm_year = 2017 - 1900;
	dec.tm_hour = 0;
	dec.tm_min = 0;
	dec.tm_sec = 0;

	time_t sec1 = mktime(&jul);
	time_t sec2 = mktime(&dec);

	/* calculate days */
	double days = difftime(sec2, sec1) / (24.0 * 60 * 60);
	std::cout << "Days between Jul 25 and Dec 26:\t\t\t" << days << std::endl;

	std::cout << std::endl;

	/* 2. a. */
	errno = 0;
	sqrt(-2);
	std::cout << "Square root of -2 error:\t\t\t" << strerror(errno) << std::endl;

	/* 2. b. */
	errno = 0;
	1 / 0;
	std::cout << "Divide by zero error:\t\t\t\t" << strerror(errno) << std::endl;

	/* 2. c. */
	errno = 0;
	log(-2);
	std::cout << "Natural log of -2 error:\t\t\t" << strerror(errno) << std::endl;

	/* 2. d. */
	errno = 0;
	std::cout << "Result of 1e19 + 4 - 1e19:\t\t\t" << (1e19 + 4 - 1e19) << std::endl;
	std::cout << "Result error:\t\t\t\t\t" << strerror(errno) << std::endl;

	errno = 0;
	std::cout << "Result of 1e19 + 4 - 1e19 (casting to longs):\t" << (static_cast<long>(1e19) + 4 - static_cast<long>(1e19)) << std::endl;
	std::cout << "Result error:\t\t\t\t\t" << strerror(errno) << std::endl;

	std::cout << std::endl;

	/* 3. */
	tabulate(cube, cubeRoot, 27);

	std::cout << std::endl;

	/* 4. */
	std::cout << "Bits turned on:" << std::endl;

	/* capitals */
	for (int i = 65; i < 91; ++i) {
		countBits(i);
	}

	/* lowercase */
	for (int i = 97; i < 123; ++i) {
		countBits(i);
	}

	return 0;
}

/* 3. a. */
double cube(double toCube)
{
	return toCube * toCube * toCube;
}

/* 3. b. */
double cubeRoot(double toRoot)
{
	return cbrt(toRoot);
}

/* 3. c. */
void tabulate(double(*cube)(double), double(*cubeRoot)(double), double toTab)
{
	std::cout << "Cube of " << toTab << ":\t\t\t\t\t" << cube(toTab) << std::endl
			  << "Cube root of " << toTab << ":\t\t\t\t" << cubeRoot(toTab) << std::endl;
}

/* 4. */
void countBits(int ascii)
{
	unsigned char myChar = static_cast<unsigned char>(ascii);
	unsigned char c = myChar;

	/* count bits */
	int count = 0;
	while (c != 0) {
		if (c % 2 == 1)
			count++;
		c /= 2;
	}

	std::cout << myChar << " (" << ascii << "): " << count << std::endl;
}
