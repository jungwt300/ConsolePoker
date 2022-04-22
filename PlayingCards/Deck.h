#pragma once
#include "Card.h"
/*
	Deck Ŭ������ Card Ŭ������ ������ ��ü�� �迭 ���·� ����
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

