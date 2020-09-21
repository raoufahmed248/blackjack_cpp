#include "hand.h"
#include "cardConstants.h"
#include <iostream>

int Hand::getValue(void)
{
    int value = 0;
    bool isSoft = false;
    for(auto x: cards)
    {
        std::string face = x.getFace();
        std::string suit = x.getSuit();
        if(face == cardConstants::FACE_ACE)
        {
            if(value + cardConstants::ACE_VALUE_HIGH > cardConstants::BLACKJACK_VALUE)
            {
                value += 1;
                isSoft = false;
            }
            else
            {
                value += 11;
                isSoft = true;
            }
        }
        else if(face == cardConstants::FACE_2)
        {
            value += 2;
        }
        else if(face == cardConstants::FACE_3)
        {
            value += 3;
        }
        else if(face == cardConstants::FACE_4)
        {
            value += 4;
        }
        else if(face == cardConstants::FACE_5)
        {
            value += 5;
        }
        else if(face == cardConstants::FACE_6)
        {
            value += 6;
        }
        else if(face == cardConstants::FACE_7)
        {
            value += 7;
        }
        else if(face == cardConstants::FACE_8)
        {
            value += 8;
        }
        else if(face == cardConstants::FACE_9)
        {
            value += 9;
        }
        else if(face == cardConstants:: FACE_10 ||
            face == cardConstants::FACE_JACK || 
            face == cardConstants::FACE_KING ||
            face == cardConstants::FACE_QUEEN)
        {
            value += 10;
        }
    }
    if(value > cardConstants::BLACKJACK_VALUE)
    {
        if(isSoft)
        {
            value -= 10;
        }
    }
    return value;
}

int Hand::numberOfCards(void)
{
    return cards.size();
}

void Hand::addCard(Card card)
{
    cards.push_back(card);
}

void Hand::printHand(void)
{
    std::cout << "----------Cards-----------\n";
    for(auto x: cards)
    {
        if(x.getFlipped())
        {
            std::cout << " Card Flipped \n";
        }
        else
        {
            x.printCard();
        }
    }
    std::cout << "---------------------------\n";
}

void Hand::flipOverCards(void)
{
    for(int x = 0; x < cards.size(); x++)
    {
        if(cards[x].getFlipped())
        {
            cards[x].flipCard();
            std:: cout <<"should've flipped: " << cards[x].getFlipped() << "\n";
        }
    }
}

// int Hand::ValueOfCard(Card card)
// {
//     std::string cardFace = card.getFace();
//     if(cardFace == "")
// }
