#include <iostream>
#include "Deck.h"
#include "Card.h"
#include "RandomRange.h"
namespace PlayingCard {
	int Deck::DrawID = 0;

	void Deck::DeckSetting() {
		int type;
		int num;
		int cardNum = 0;
		for (int i = 0; i < 52; i++) {	//�迭 null �� �ʱ�ȭ
			cardDeck[i] = NULL;
		}
		for (type = Card::eSpade; type <= Card::eClover; type++) {	//�迭 ī�� value�� �ʱ�ȭ
			for (num = 0; num < 13; num++) {	//2,3,4,5,6,7,8,9,10,J,Q,K,A
				cardDeck[cardNum] = new Card(type, num);
				cardNum++;
			}
		}
	}
	/*
	�迭�� ������ ����,
	1~52 ������ �迭�� ���� ������ ��ġ�� �ִ� ī�峢�� ��ȯ�ϱ�.
	�ܼ��� 52�� �̻�;
	*/
	void Deck::CardChange(int x, int y) {	//x ���� ī�带 y��° ī��� ��ȯ
		Card* rightCard = new Card(*cardDeck[x]);
		cardDeck[x] = cardDeck[y];
		cardDeck[y] = rightCard;
		rightCard = NULL;
	}
	void Deck::DeckShuffle() {
		int sCount;
		int rand_x;
		int rand_y;
		for (sCount = Random::RandomRange(52, 80); sCount > 0; sCount--) {
			rand_x = Random::RandomRange(0, 51);
			rand_y = Random::RandomRange(0, 51);
			Deck::CardChange(rand_x, rand_y);
		}
	}
	void Deck::GetCard(int num) {
		cardDeck[num]->GetCard();
	}
	Card* Deck::DrawCard()
	{
		return cardDeck[DrawID];
	}
}