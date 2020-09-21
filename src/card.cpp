#include "card.h"
#include <iostream>

Card::Card(std::string suit, std::string face)
{
    cardSuit = suit;
    cardFace = face;
    isFlipped = true;
}

std::string Card::getFace(void)
{
    return cardFace;
}

std::string Card::getSuit(void)
{
    return cardSuit;
}

bool Card::getFlipped(void)
{
    return isFlipped;
}

void Card::flipCard(void)
{
    isFlipped = false;
}

void Card::printCard(void)
{
    std::cout << "Suit: " << getSuit() << " Face: " << getFace() << ". \n";
}