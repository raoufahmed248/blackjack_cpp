#include "shoe.h"
#include "hand.h"
#include "cardConstants.h"
#include "userPlayer.h"
#include "blackJack.h"
#include <iostream>


int main()
{
    // Shoe shoe = Shoe(2);
    // std::cout << "Going to shuffle-------\n";
    // shoe.shuffleCards();
    // shoe.printCards();
    // auto newCard = shoe.drawCard();
    // newCard.printCard();
    // std::cout << "TOOK OUT A CARD --------------\n";
    // shoe.printCards();
    // Hand hand = Hand();
    // Card card1 = Card(cardConstants::SUIT_CLUBS,cardConstants::FACE_ACE);
    // Card card2 = Card(cardConstants::SUIT_CLUBS,cardConstants::FACE_ACE);
    // Card card3 = Card(cardConstants::SUIT_CLUBS,cardConstants::FACE_ACE);
    // Card card4 = Card(cardConstants::SUIT_CLUBS,cardConstants::FACE_ACE);
    
    // card1.printCard();
    // hand.addCard(card1);
    // hand.addCard(card2);
    // hand.addCard(card3);
    // hand.addCard(card4);
    
    // std::cout << "hand value: " << hand.getValue() << "\n";

    // userPlayer you = userPlayer(5000);
    // you.getBetChoice();
    // std::cout << "\n Betted: " << you.getBetAmount();
    
    // you.getCardAction();
    BlackJack game;
    game.run();


}