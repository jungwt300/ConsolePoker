#pragma once
#include <iostream>
#include "Card.h"
#include "Deck.h"

using namespace PlayingCard;
/*덱으로부터 카드를 받는다*/
class Player {
public:
	static int PlayerID;
public:
	enum ePltype {
		ePlayer,
		eDirector
	};
public:
	Player();
	Player(int type);
	void DrawCard(Card* DeckofCard);	//덱을 받는다.
	
	//getter
	void CheckCard();
private:
	int ID;
	int handCount = 0;//핸드 소지수;
	Card* HandDeck;
};