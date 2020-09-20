#ifndef HAND_H
#define HAND_H


#include "card.h"
#include <vector>


class Hand
{
    public:
        int getValue(void);
        void addCard(Card card);
        
    private:
        std::vector<Card> cards;
        int handValue;
        int valueOfCard(Card card);
};

#endif