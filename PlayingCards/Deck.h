#pragma once
#include "Card.h"
/*
	Deck 클래스는 Card 클래스로 생성된 객체를 배열 형태로 저장
*/	
namespace PlayingCard {
	class Deck {
	public:
		Deck() = default;
		static int DrawID;
		void DeckSetting();
		void CardChange(int x, int y);
		void DeckShuffle();
		//getter
		void GetCard(int num);
		Card* DrawCard();
	private:
		Card* cardDeck[52];
	};
}

