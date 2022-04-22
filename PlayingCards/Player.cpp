#include "Player.h"
#include "Role.h"
#include "Deck.H"
#include "Card.h"
Player::Player() : Role(Role::ePlayer){
	cash = 100;
}