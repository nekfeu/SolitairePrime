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

Rank Card::getRank() const {
    return this->rank;
}

Suit Card::getSuit() const {
    return this->suit;
}

std::ostream &operator<<(std::ostream &stream, const Card::Card &card) {
    stream << card.getRank() << " of " << card.getSuit();
    return stream;
}
