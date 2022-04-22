#pragma once
#include <iostream>
/*
	Card : 컬러, 숫자 저장.
*/
namespace PlayingCard {
	class Card {
	public:
		Card() = default;
		Card(int type, int num);
		Card(const Card& rhs);
		Card& operator=(const Card& rhs);
	public:
		enum eType {
			eSpade,
			eDiamond,
			eHeart,
			eClover,
		};
	public:
		void GetCardType();
		void GetCardNum();
		void GetCard();
		void SetCardType(int num);
		void SetCardNum(int num);
		int returnType();
		int returnNum();
	private:
		int cardType;
		int cardNum;
	};
}
