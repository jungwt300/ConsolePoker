#include <iostream>
#include "Player.h"
#include "Card.h"
#include "Deck.h"
using namespace PlayingCard;
int Player::PlayerID = 0;
Player::Player() {	//기본 홀덤 룰 핸드 2장
	ID = PlayerID;	//플레이어 정하기.
	PlayerID++;
	HandDeck = new Card[2];
	//빈 핸드 카드 동적 할당.
	//HandDeck[0] = new Card();
	//HandDeck[1] = new Card();
}
Player::Player(int type)	//커스텀 룰
{
	ID = PlayerID;	//플레이어 정하기.
	PlayerID++;
	switch(type) {
	case ePlayer:	//플레이어
		HandDeck = new Card[2];
		break;
	case eDirector:	//디렉터
		HandDeck = new Card[5];
		break;
	default:
		HandDeck = new Card[2];
		break;
	}
	//빈 핸드 카드 동적 할당.
	//HandDeck[0] = new Card();
	//HandDeck[1] = new Card();
}
void Player::DrawCard(Card* DeckofCard) {
	HandDeck[handCount] = *DeckofCard;
	handCount++;
	Deck::DrawID++;
	std::cout << "플레이어"<<ID<<"카드 드로우" << std::endl;
}
void Player::CheckCard() {
	if (this->ID == 0) {
		for (int i = 0; i < 5; i++)
			HandDeck[i].GetCard();
	}
	else {
		for (int i = 0; i < 2; i++)
			HandDeck[i].GetCard();
	}
}