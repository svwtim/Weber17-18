#include "Card.h"

Card::Card()
{

}

Card::Card(Suit, Face )
{


}


Card::~Card()
{
}

Suit Card::getSuit() const
{
	return Suit();
}

Face Card::getFace() const
{
	return Face();
}

string Card::toString()
{
	string toString = suit + " " + face ;

	return string();
}
