#ifndef PLAYER_H
#define PLAYER_H

#include "moves.h"
#include "hand.h"
class Player
{
    public:
        //virtual Move getCardAction(void);
        int getHandValue(void);
        void addCardToHand(Card card);
    private:
        Hand hand;
};

#endif