/*
 * shuffle.cpp
 *
 *  Created on: Jan 30, 2017
 *      Author: Brian Clinkenbeard
 */

#include "header.h"
#include "card.h"

/* 1b. perform a perfect shuffle */
void shuffleDeck(card shuffle[52])
{
	/* preserve original deck (cannot copy array) */
	card unshuffled[52];
	for (int i = 0; i < 52; ++i) {
		unshuffled[i] = shuffle[i];
	}

	/* perfect shuffle */
	int firstHalf = 0;
	int secondHalf = 26;
	int count = 0;
	while (count < 51) {
		shuffle[count] = unshuffled[firstHalf];
		firstHalf++;
		count++;
		shuffle[count] = unshuffled[secondHalf];
		secondHalf++;
		count++;
	}
}


