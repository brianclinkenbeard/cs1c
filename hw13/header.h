/*
 * header.h
 *
 *  Created on: May 2, 2017
 *      Author: Brian Clinkenbeard
 */

#ifndef HEADER_H_
#define HEADER_H_

#include <ctime>
#include <cmath>
#include <cerrno>
#include <cstring>
#include <iostream>

double cube(double);
double cubeRoot(double);
void tabulate(double(*cube)(double), double(*cubeRoot)(double), double);
void countBits(int);

#endif /* HEADER_H_ */
