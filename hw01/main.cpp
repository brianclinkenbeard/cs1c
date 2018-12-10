/*
 * main.cpp
 *
 *  Created on: Jan 30, 2017
 *      Author: Brian Clinkenbeard
 */

#include "header.h"
#include "card.h"

int main()
{
	/* 1b. initialize deck */
	card deck[52];

	/* iterate through the enums */
	int count = 0;
	for (int i = 0; i < 4; ++i) {
		suit initSuit = static_cast<suit>(i);
		for (int j = 0; j < 13; ++j) {
			face initFace = static_cast<face>(j);
			deck[count] = card(initFace, initSuit);
			count++;
		}
	}

	/* perfect shuffle */
	card shuffled[52] = deck;
	shuffleDeck(shuffled);


	/* shuffle until deck is returned to original */
	card final[52] = shuffled;
	count = 1; /* one shuffle has already occurred */
	while (!equalDecks(deck, final)) {
		shuffleDeck(final);
		count++;
	}

	/* 1c. print decks */
	cout << "Initial deck:" << endl;
	printDeck(deck);
	cout << "Shuffled deck:" << endl;
	printDeck(shuffled);
	cout << "Final deck:" << endl;
	printDeck(final);

	/* 1d. print amount of shuffles */
	cout << "It took " << count << " perfect shuffles for the deck to return to its original order." << endl;

	return 0;
}
