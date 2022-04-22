#include <iostream>
#include "Player.h"
#include "Card.h"
#include "Deck.h"
using namespace PlayingCard;
int Player::PlayerID = 0;
Player::Player() {	//�⺻ Ȧ�� �� �ڵ� 2��
	ID = PlayerID;	//�÷��̾� ���ϱ�.
	PlayerID++;
	HandDeck = new Card[2];
	//�� �ڵ� ī�� ���� �Ҵ�.
	//HandDeck[0] = new Card();
	//HandDeck[1] = new Card();
}
Player::Player(int type)	//Ŀ���� ��
{
	ID = PlayerID;	//�÷��̾� ���ϱ�.
	PlayerID++;
	switch(type) {
	case ePlayer:	//�÷��̾�
		HandDeck = new Card[2];
		break;
	case eDirector:	//����
		HandDeck = new Card[5];
		break;
	default:
		HandDeck = new Card[2];
		break;
	}
	//�� �ڵ� ī�� ���� �Ҵ�.
	//HandDeck[0] = new Card();
	//HandDeck[1] = new Card();
}
void Player::DrawCard(Card* DeckofCard) {
	HandDeck[handCount] = *DeckofCard;
	handCount++;
	Deck::DrawID++;
	std::cout << "�÷��̾�"<<ID<<"ī�� ��ο�" << std::endl;
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