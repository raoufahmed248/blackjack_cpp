#ifndef CARD_H
#define CARD_H

#include <string>

class Card
{
    public:
        std::string getSuit(void);
        std::string getFace(void);
        bool getFlipped(void);
        void flipCard(void);
        void printCard(void);
        Card(std::string suit, std::string face);

    private:
        std::string cardSuit;
        std::string cardFace;
        bool isFlipped;
};

#endif