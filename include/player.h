#ifndef PLAYER_H
#define PLAYER_H

#include "moves.h"
#include "hand.h"
class Player
{
    public:
        virtual Move getCardAction(void) = 0;
        int getHandValue(void);
        virtual void addCardToHand(Card card);
        void printCardsInHand(void);
        bool getBustStatus(void);
        void setPlayerBust(void);
    protected:
        Hand hand;
        bool busts = false;
};

#endif