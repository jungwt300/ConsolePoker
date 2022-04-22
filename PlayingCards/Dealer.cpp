#include "Dealer.h"
#include "Role.h"
#include "Deck.H"
#include "Card.h"
Dealer::Dealer(): Role(Role::eDealer)
{
	pot = 0;
}
