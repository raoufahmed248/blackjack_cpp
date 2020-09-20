#ifndef BLACKJACK_H
#define BLACKJACK_H


#include "userPlayer.h"
#include "dealerPlayer.h"
#include "shoe.h"

enum Winner {NotDecided = 0,User = 1, Dealer = 2};

class BlackJack
{
    public:
        void run(void);
    private:
        dealerPlayer *Dealer;
        userPlayer *Player;
        Shoe *shoe;
        Winner winner = NotDecided;
                
};

#endif