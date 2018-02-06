//
// Created by Kévin Empociello on 05/02/2018.
//

#include "Rank.h"

std::ostream& operator<< (std::ostream &stream, const Rank &rank) {
    std::string strValues[3] = {"Jack", "Queen", "Kings"};
    int value = static_cast<int>(rank);

    if (value == 1) {
        stream << "Ace";
    } else if (value > 10) {
        stream << strValues[value - 11];
    } else {
        stream << static_cast<int>(rank);
    }

    return stream;
}