#include <algorithm>
#include <iostream>

#include "shoe.h"
#include "cardConstants.h"


Card Shoe::drawCard(void)
{
    Card retCard = deck.back();
    deck.pop_back();
    return retCard;
}

void Shoe::shuffleCards(void)
{
    std::srand(time(0));
    std::random_shuffle(deck.begin(),deck.end());
}

void Shoe::printCards(void)
{
    for(auto x: deck)
        x.printCard();
}

Shoe::Shoe(int numberOfDecks)
{
    
    deck.reserve(numberOfCardsInDeck* numberOfDecks);
    for(int x = 0; x < numberOfDecks; x++)
    {
        for(auto x: cardConstants::suitesArray)
        {
            for(auto y: cardConstants::facesArray)
            {
                deck.push_back(Card(x,y));
            }
        }
    }
}