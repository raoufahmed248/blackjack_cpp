#ifndef HAND_H
#define HAND_H


#include "card.h"
#include <vector>


class Hand
{
    public:
        int getValue(void);
        int numberOfCards(void);
        void addCard(Card card);
        void printHand(void);
        void flipOverCards(void);
    private:
        std::vector<Card> cards;
        int handValue;
        int valueOfCard(Card card);
};

#endif