#ifndef USERPLAYER_H
#define USERPLAYER_H


#include "player.h"
class userPlayer:public Player
{
    public:
        int getRemainingMoney(void);
        int getBetChoice(void);
        Move getCardAction(void);
        int getBetAmount(void);
        void resetBetAmount(void);
        void addWinnings(int winningAmount);
        void setStartingMoney(int startingMoney);
    private:
        int remainingMoney;
        int betAmount;
};

#endif