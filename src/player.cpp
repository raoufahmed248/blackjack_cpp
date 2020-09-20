#include "player.h"

int Player::getHandValue(void)
{
    return hand.getValue();
}

void Player::addCardToHand(Card card)
{
    hand.addCard(card);
}