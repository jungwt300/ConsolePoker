#include <iostream>
#include "Role.h"
#include "Card.h"
#include "Deck.h"
using namespace PlayingCard;
int Role::PlayerID = 0;
 Role::Role() {	//기본 홀덤 룰 핸드 2장
	ID = PlayerID;	//플레이어 정하기.
	PlayerID++;
}
Role::Role(int type)	//커스텀 룰
{
	ID = PlayerID;	//플레이어 정하기.
	PlayerID++;
	switch(type) {
	case ePlayer:	//플레이어
		HandDeck = new Card[2];
		break;
	case eDealer:	//디렉터
		HandDeck = new Card[5];
		break;
	default:
		HandDeck = new Card[2];
		break;
	}
}
void Role::HandSize(int hand)
{
	HandDeck = new Card[hand];
}
void Role::DrawCard(Card* DeckofCard) {
	HandDeck[handCount] = *DeckofCard;
	handCount++;
	Deck::DrawID++;
	std::cout << "플레이어"<<ID<<"카드 드로우" << std::endl;
}

void Role::CheckCard() {
	if (this->ID == 0) {
		for (int i = 0; i < 5; i++)
			HandDeck[i].GetCard();
	}
	else {
		for (int i = 0; i < 2; i++)
			HandDeck[i].GetCard();
	}
}