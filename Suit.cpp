//
// Created by Kévin Empociello on 05/02/2018.
//

#include "Suit.h"

std::ostream& operator<< (std::ostream &stream, const Suit &suit) {
    std::string strValues[] = { "Spade", "Heart", "Diamond", "Club"};

    stream << strValues[static_cast<int>(suit)];

    return stream;
}