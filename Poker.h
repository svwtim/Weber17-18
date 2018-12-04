#pragma once
#ifndef POKER
#define POKER
#include "Card.h"
#include<string>
#include <array>

#include<fstream>

#include<windows.h>


using namespace std;

const int SEVEN_STUD_SIZE = 7;
static const int DECK_SIZE = 52;
class Poker
{
public:
	Poker();
	void setSevenStud(array<Card,DECK_SIZE>);
	void shuffle();
	void deal();
	//Hand identifyHand();
	string deckToString();
	string sevenStudToString();
	string handToString();

private:
	array < Card, DECK_SIZE > deck;
	array < Card, SEVEN_STUD_SIZE> sevenStud;
};
#endif