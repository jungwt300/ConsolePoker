#include <iostream>
#include "Card.h"
#include "Deck.h"
#include "RandomRange.h"
#include "Role.h"
#include "Dealer.h"
#include "Player.h"
using namespace std;
using namespace PlayingCard;
int main() {
	Deck CustomDeck;
	Dealer Dealer;
	Player p1;
	Player p2;
	Card spadeCard(Card::eSpade, 2);

	CustomDeck.DeckSetting();
	for (int i = 0; i < 52; i++) {
		CustomDeck.GetCard(i);
	}
	cout << "������..." << endl;
	CustomDeck.DeckShuffle();
	cout << "���� �Ϸ�" << endl;
	for (int i = 0; i < 52; i++) {
		CustomDeck.GetCard(i);
	}
	Dealer.DrawCard(CustomDeck.DrawCard());
	Dealer.DrawCard(CustomDeck.DrawCard());
	Dealer.DrawCard(CustomDeck.DrawCard());
	Dealer.DrawCard(CustomDeck.DrawCard());
	Dealer.DrawCard(CustomDeck.DrawCard());
	Dealer.CheckCard();

	p1.DrawCard(CustomDeck.DrawCard());
	p1.DrawCard(CustomDeck.DrawCard());
	p1.CheckCard();

	p2.DrawCard(CustomDeck.DrawCard());
	p2.DrawCard(CustomDeck.DrawCard());
	p2.CheckCard();
	return 0;
}