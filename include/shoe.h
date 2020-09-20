#ifndef SHOE_H
#define SHOE_H


#include <vector>
#include "card.h"

class Shoe
{
    public:
        Card drawCard(void);
        void shuffleCards(void);
        void printCards(void);
        Shoe(int numberOfDecks);
    private:
        const int numberOfCardsInDeck = 52;
        std::vector<Card> deck;
};

#endif