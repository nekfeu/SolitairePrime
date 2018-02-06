//
// Created by Kévin Empociello on 05/02/2018.
//

#ifndef SOLITAIREPRIME_DECK_H
#define SOLITAIREPRIME_DECK_H

#include <iostream>
#include "Card.h"

class Deck {
private:
    Card cards[52];
public:
    Deck();
    void refresh();
    Card deal();
    void shuffle();
    int cardsLeft();
    void show();
};


#endif //SOLITAIREPRIME_DECK_H
