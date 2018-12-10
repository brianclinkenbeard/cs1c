/*
 * print.cpp
 *
 *  Created on: Jan 30, 2017
 *      Author: Brian Clinkenbeard
 */

#include "header.h"
#include "card.h"

/* 1b. print the deck of cards */
void printDeck(card printDeck[52])
{
	for (int i = 0; i < 52; ++i) {
		cout << i + 1 << ". " << printDeck[i] << endl;
	}
}
