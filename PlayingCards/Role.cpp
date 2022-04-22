#include <iostream>
#include "Role.h"
#include "Card.h"
#include "Deck.h"
using namespace PlayingCard;
int Role::PlayerID = 0;
 Role::Role() {	//�⺻ Ȧ�� �� �ڵ� 2��
	ID = PlayerID;	//�÷��̾� ���ϱ�.
	PlayerID++;
}
Role::Role(int type)	//Ŀ���� ��
{
	ID = PlayerID;	//�÷��̾� ���ϱ�.
	PlayerID++;
	switch(type) {
	case ePlayer:	//�÷��̾�
		HandDeck = new Card[2];
		break;
	case eDealer:	//����
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
	std::cout << "�÷��̾�"<<ID<<"ī�� ��ο�" << std::endl;
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