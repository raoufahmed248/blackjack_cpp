#include "userPlayer.h"
#include <iostream>
#include<limits>


userPlayer::userPlayer(int startingMoney)
{
    remainingMoney = startingMoney;
}

int userPlayer::getRemainingMoney(void)
{
    return remainingMoney;
}

int userPlayer::getBetAmount(void)
{
    return betAmount;
}

int userPlayer::getBetChoice(void)
{
    std::cout << "Enter a bet amount: ";
    int x = 0;
    while(!(std::cin >> x)){
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid bet.  Try again: ";
    }
    betAmount = x;
    return betAmount;
}