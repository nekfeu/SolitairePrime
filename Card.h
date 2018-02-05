//
// Created by Kévin Empociello on 05/02/2018.
//

#ifndef SOLITAIREPRIME_CARD_H
#define SOLITAIREPRIME_CARD_H

#include "Rank.h"
#include "Suit.h"

class Card {
private:
    Rank rank;
    Suit suit;
public:
    Card();
    Card(Rank, Suit);
    int getValue();
    void show();
};


#endif //SOLITAIREPRIME_CARD_H
