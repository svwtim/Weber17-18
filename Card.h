#pragma once
#ifndef CARD
#define CARD
#include <string>
#include "Poker.h"
using namespace std;

	enum Suit { KARO = 0,HERZ = 1,PIK = 2,KREUZ = 3 };
	enum Face { ZWEI = 0, DREI = 1,VIER = 2,FUENF = 3,
			  SECHS = 4,SIEBEN = 5,ACHT = 6,NEUN = 7,
			  ZEHN = 8,BUBE = 9,DAME = 10,KOENIG = 11,ASS = 12 };

class Card
{

public:

	Card();
	Card(Suit, Face);
	~Card();
	Suit getSuit() const;
	Face getFace() const;
	string toString();
	
private:
	Suit suit;
	Face face;
};
#endif