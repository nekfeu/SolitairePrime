//
// Created by Kévin Empociello on 05/02/2018.
//

#ifndef SOLITAIREPRIME_SUIT_H
#define SOLITAIREPRIME_SUIT_H

#include <iostream>

enum Suit {
    SPADES,
    HEARTS,
    DIAMONDS,
    CLUBS
};

std::ostream& operator<< (std::ostream &stream, const Suit &suit);

#endif //SOLITAIREPRIME_SUIT_H
