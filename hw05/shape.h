/*
 * shape.h
 *
 *  Created on: Feb 27, 2017
 *      Author: Brian Clinkenbeard
 */

#ifndef SHAPE_H_
#define SHAPE_H_

/* 1. */
class Shape {
public:
	virtual double calcPerimeter() = 0;
	virtual double calcArea() = 0;
};

#endif /* SHAPE_H_ */
