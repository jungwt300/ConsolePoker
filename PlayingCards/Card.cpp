#include <iostream>
#include "Card.h"

using namespace PlayingCard;
Card::Card(int type, int num) : cardType(type), cardNum(num) {}
Card::Card(const Card& rhs){
	cardNum = rhs.cardNum;		//±Ì¿∫ ∫πªÁ
	cardType = rhs.cardType;	//±Ì¿∫ ∫πªÁ
}
Card& Card::operator=(const Card& rhs)
{
	cardNum = rhs.cardNum;
	cardType = rhs.cardType;
	return *this;
}
void Card::GetCardNum() {
	std::cout << cardNum << std::endl;
}
void Card::GetCardType() {
	std::cout << cardNum << std::endl;
}
void Card::GetCard() {
	switch (this->cardType)
	{
	case eSpade:
		std::cout << "Spade";
		break;

	case eDiamond:
		std::cout << "Diamond";
		break;

	case eHeart:
		std::cout << "Heart";
		break;

	case eClover:
		std::cout << "Clover";
		break;

	default:
		std::cout << "Joker?";
		break;
	} 
	switch (this->cardNum) {
	case 0:
		std::cout << "2" << std::endl;
		break;
	case 1:
		std::cout << "3" << std::endl;
		break;
	case 2:
		std::cout << "4" << std::endl;
		break;
	case 3:
		std::cout << "5" << std::endl;
		break;
	case 4:
		std::cout << "6" << std::endl;
		break;
	case 5:
		std::cout << "7" << std::endl;
		break;
	case 6:
		std::cout << "8" << std::endl;
		break;
	case 7:
		std::cout << "9" << std::endl;
		break;
	case 8:
		std::cout << "10" << std::endl;
		break;
	case 9:
		std::cout << "J" << std::endl;
		break;
	case 10:
		std::cout << "Q" << std::endl;
		break;
	case 11:
		std::cout << "K" << std::endl;
		break;
	case 12:
		std::cout << "A" << std::endl;
		break;
	default:
		std::cout << "Jocker??" << std::endl;
		break;
	}
}	//ƒ´µÂ 
void Card::SetCardNum(int num){
	cardNum = num;
}
int PlayingCard::Card::returnType()
{
	return cardType;
}
int PlayingCard::Card::returnNum()
{
	return cardNum;
}
void Card::SetCardType(int type){
	cardType = type;
}