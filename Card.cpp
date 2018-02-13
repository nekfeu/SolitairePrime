//
// Created by Kévin Empociello on 05/02/2018.
//

#include "Card.h"

Card::Card() {
}

Card::Card(Rank rank, Suit suit) {
    this->rank = rank;
    this->suit = suit;
}

int Card::getValue() const {
    int value = this->rank;

    if (value > 10) {
        return 10;
    }

    return value;
}

void Card::show() {
    std::cout << this << std::endl;
}

Rank Card::getRank() const {
    return this->rank;
}

Suit Card::getSuit() const {
    return this->suit;
}

std::ostream &operator<<(std::ostream &stream, const Card::Card *card) {
    stream << card->getRank() << " of " << card->getSuit() << "(" << card->getValue() << ")";
    return stream;
}
