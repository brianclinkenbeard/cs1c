/*
 * card.cpp
 *
 *  Created on: Jan 30, 2017
 *      Author: Brian Clinkenbeard
 */

#include "header.h"
#include "card.h"

/* for array instantiation */
card::card() {}

/* constructor */
card::card(face newFace, suit newSuit)
{
	myFace = newFace;
	mySuit = newSuit;
}

/* "break;" not necessary on returns */
string card::getFace()
{
	switch (myFace) {
	case ACE:
		return "Ace";
	case TWO:
		return "2";
	case THREE:
		return "3";
	case FOUR:
		return "4";
	case FIVE:
		return "5";
	case SIX:
		return "6";
	case SEVEN:
		return "7";
	case EIGHT:
		return "8";
	case NINE:
		return "9";
	case TEN:
		return "10";
	case JACK:
		return "Jack";
	case QUEEN:
		return "Queen";
	case KING:
		return "King";
	}
}

string card::getSuit()
{
	switch (mySuit) {
	case CLUBS:
		return "Clubs";
	case DIAMONDS:
		return "Diamonds";
	case HEARTS:
		return "Hearts";
	case SPADES:
		return "Spades";
	}
}

/* print the face and suit of the card */
ostream& operator<<(ostream &os, card &outcard)
{
	os << outcard.getFace() << " of " << outcard.getSuit();
	return os;
}

/* overload relational operators for comparison */
bool operator==(const card &firstCard, const card &secondCard)
{
	return (firstCard.myFace == secondCard.myFace && firstCard.mySuit == secondCard.mySuit);
}

bool operator!=(const card &firstCard, const card &secondCard) {
	return !(firstCard == secondCard);
}
