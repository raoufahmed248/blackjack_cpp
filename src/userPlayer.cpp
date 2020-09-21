#include <iostream>
#include<limits>

#include "userPlayer.h"
#include "moves.h"

void userPlayer::setStartingMoney(int startingMoney)
{
    remainingMoney = startingMoney;
}

int userPlayer::getRemainingMoney(void)
{
    return remainingMoney;
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

Move userPlayer::getCardAction(void)
{
    std::cout << "Enter a choice(hit/stand): ";
    std::string choice;
    std::cin >> choice;
    std::cout << choice;
    
    while(choice != "hit" && choice != "stand"){
        std::cin.clear();
        //std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Invalid choice.  Try again: ";
        std::cin >> choice;
    }
    std::cout << " \n choice:" << choice; 
    if(choice == "hit")
    {
        return HIT;
    }
    else
    {
        return STAND;
    }
    
}

int userPlayer::getBetAmount(void)
{
    return betAmount;
}

void userPlayer::resetBetAmount(void)
{
    betAmount = 0;
}

void userPlayer::addWinnings(int winningAmount)
{
    remainingMoney += winningAmount;
}
