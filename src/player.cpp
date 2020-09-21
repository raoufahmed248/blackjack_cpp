#include "player.h"

int Player::getHandValue(void)
{
    return hand.getValue();
}

void Player::addCardToHand(Card card)
{
    if(card.getFlipped())
    {
        card.flipCard();
    }
    hand.addCard(card);
}

void Player::printCardsInHand(void)
{
    hand.printHand();
}

bool Player::getBustStatus(void)
{
    return  busts;
}

void Player::setPlayerBust(void)
{
    busts = true;
}