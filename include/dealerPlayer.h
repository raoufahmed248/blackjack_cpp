#ifndef DEALERPLAYER_H
#define DEALERPLAYER_H



#include "player.h"

class dealerPlayer:public Player
{
    public:
        void flipOverCard(void);
        Move getCardAction(void);
        void addCardToHand(Card card);
    
};

#endif