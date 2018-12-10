/*
 * card.h
 *
 *  Created on: Jan 30, 2017
 *      Author: Brian Clinkenbeard
 */

#ifndef CARD_H_
#define CARD_H_

enum suit {CLUBS, DIAMONDS, HEARTS, SPADES};
enum face {ACE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING};

#include <string>

class card {
public:
	card();
	card(face, suit);
	string getFace();
	string getSuit();
	friend bool operator==(const card&, const card&);
private:
	face myFace;
	suit mySuit;
};

ostream& operator<<(ostream&, card&);
bool operator==(const card&, const card&);
bool operator!=(const card&, const card&);

void printDeck(card[52]);
void shuffleDeck(card[52]);
bool equalDecks(const card[52], const card[52]);

#endif /* CARD_H_ */
