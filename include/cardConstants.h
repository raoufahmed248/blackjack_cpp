#ifndef CARDCONSTANTS_H
#define  CARDCONSTANTS_H

#include <string>
#include <vector>


namespace cardConstants{
    static const std::string FACE_ACE = "ace";
    static const std::string FACE_2 = "2";
    static const std::string FACE_3 = "3";
    static const std::string FACE_4 = "4";
    static const std::string FACE_5 = "5";
    static const std::string FACE_6 = "6";
    static const std::string FACE_7 = "7";
    static const std::string FACE_8 = "8";
    static const std::string FACE_9 = "9";
    static const std::string FACE_10 = "10";
    static const std::string FACE_JACK = "jack";
    static const std::string FACE_QUEEN = "queen";
    static const std::string FACE_KING = "king";

    static const std::string SUIT_CLUBS = "clubs";
    static const std::string SUIT_DIAMONDS = "diamonds";
    static const std::string SUIT_HEARTS = "hearts";
    static const std::string SUIT_SPADES = "spades";

    static const int BLACKJACK_VALUE = 21;
    static const int ACE_VALUE_HIGH = 11;
    static const int ACE_VALUE_LOW = 1;
    //TODO: make constants for all card values
    

    static const std::vector<std::string> suitesArray{SUIT_CLUBS,SUIT_DIAMONDS,
        SUIT_HEARTS,SUIT_SPADES};
    static const std::vector<std::string> facesArray{FACE_ACE,FACE_2,FACE_3,FACE_4,
        FACE_5,FACE_6,FACE_7,FACE_8,FACE_9,FACE_10,FACE_JACK,FACE_QUEEN,FACE_KING};
}

#endif