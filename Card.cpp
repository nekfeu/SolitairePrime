//
// Created by Kévin Empociello on 05/02/2018.
//

#include "Card.h"

Card::Card() {
    // carte vide
}

Card::Card(Rank rank, Suit suit) {
    this->rank = rank;
    this->suit = suit;
}

int Card::getValue() {
    return 0;
}

void Card::show() {
}
