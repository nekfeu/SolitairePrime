//
// Created by Kévin Empociello on 05/02/2018.
//

#ifndef SOLITAIREPRIME_RANK_H
#define SOLITAIREPRIME_RANK_H

#include <iostream>

enum Rank {
    ACE = 1,
    TWO,
    THREE,
    FOUR,
    FIVE,
    SIX,
    SEVEN,
    EIGHT,
    NINE,
    TEN,
    JACK,
    QUEEN,
    KING
};

std::ostream& operator<< (std::ostream &stream, const Rank &rank);

#endif //SOLITAIREPRIME_RANK_H
