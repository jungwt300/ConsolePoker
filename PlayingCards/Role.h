#pragma once
#include <iostream>
#include "Card.h"
#include "Deck.h"

using namespace PlayingCard;
/*�����κ��� ī�带 �޴´�*/
class Role {
public:
	static int PlayerID;
public:
	enum ePlayertype {
		ePlayer,
		eDealer
	};
public:
	Role();
	Role(int type);	//type
	void HandSize(int hand);
	void DrawCard(Card* DeckofCard);	//���� �޴´�.
	
	//getter
	void CheckCard();
private:
	int ID;
	int handCount = 0;//�ڵ� ������;
	Card* HandDeck;
};