/*
 * compare.cpp
 *
 *  Created on: Jan 30, 2017
 *      Author: Brian Clinkenbeard
 */

#include "header.h"
#include "card.h"

/* 1b. compare two decks of cards */
bool equalDecks(const card firstDeck[52], const card secondDeck[52])
{
	for (int i = 0; i < 52; ++i) {
		if (firstDeck[i] != secondDeck[i])
			return false;
	}
	/* fall-through: all cards are equal */
	return true;
}


