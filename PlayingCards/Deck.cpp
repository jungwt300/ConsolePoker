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
		for (int i = 0; i < 52; i++) {	//배열 null 로 초기화
			cardDeck[i] = NULL;
		}
		for (type = Card::eSpade; type <= Card::eClover; type++) {	//배열 카드 value로 초기화
			for (num = 0; num < 13; num++) {	//2,3,4,5,6,7,8,9,10,J,Q,K,A
				cardDeck[cardNum] = new Card(type, num);
				cardNum++;
			}
		}
	}
	/*
	배열을 난수로 섞기,
	1~52 까지의 배열을 서로 랜덤한 위치에 있는 카드끼리 교환하기.
	휫수는 52번 이상;
	*/
	void Deck::CardChange(int x, int y) {	//x 번쨰 카드를 y번째 카드와 교환
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