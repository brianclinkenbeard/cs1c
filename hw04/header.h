/*
 * header.h
 *
 *  Created on: Feb 5, 2017
 *      Author: Brian Clinkenbeard
 */

#ifndef HEADER_H_
#define HEADER_H_

#include "softwaretester.h"

void passByCopy(brian::SoftwareTester);
void passByReference(brian::SoftwareTester&);
brian::SoftwareTester returnByCopy(brian::SoftwareTester&);
brian::SoftwareTester* returnByReference(brian::SoftwareTester&);


#endif /* HEADER_H_ */
