#pragma once
#include <iostream>
#include "Card.h"
#include "Deck.h"

using namespace PlayingCard;
/*�����κ��� ī�带 �޴´�*/
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
	void DrawCard(Card* DeckofCard);	//���� �޴´�.
	
	//getter
	void CheckCard();
private:
	int ID;
	int handCount = 0;//�ڵ� ������;
	Card* HandDeck;
};