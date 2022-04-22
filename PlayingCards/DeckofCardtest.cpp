#include <iostream>
#include "Card.h"
#include "Deck.h"
#include "RandomRange.h"
#include "Player.h"
using namespace std;
using namespace PlayingCard;

int main() {
	Deck CustomDeck;
	Player Director(Player::eDirector);
	Player p1(Player::ePlayer);
	Player p2(Player::ePlayer);
	Card spadeCard(Card::eSpade, 2);
	spadeCard.GetCardType();
	spadeCard.GetCardNum();
	CustomDeck.DeckSetting();

	for (int i = 0; i < 52; i++) {
		CustomDeck.GetCard(i);
	}

	cout << "¼ÅÇÃÁß..." << endl;
	CustomDeck.DeckShuffle();
	cout << "¼ÅÇÃ ¿Ï·á" << endl;

	for (int i = 0; i < 52; i++) {
		CustomDeck.GetCard(i);
	}
	Director.DrawCard(CustomDeck.DrawCard());
	Director.DrawCard(CustomDeck.DrawCard());
	Director.DrawCard(CustomDeck.DrawCard());
	Director.DrawCard(CustomDeck.DrawCard());
	Director.DrawCard(CustomDeck.DrawCard());
	Director.CheckCard();

	p1.DrawCard(CustomDeck.DrawCard());
	p1.DrawCard(CustomDeck.DrawCard());
	p1.CheckCard();

	p2.DrawCard(CustomDeck.DrawCard());
	p2.DrawCard(CustomDeck.DrawCard());
	p2.CheckCard();
	return 0;
}