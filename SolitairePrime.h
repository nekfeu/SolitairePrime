//
// Created by Kévin Empociello on 06/02/2018.
//

#ifndef SOLITAIREPRIME_SOLITAIREPRIME_H
#define SOLITAIREPRIME_SOLITAIREPRIME_H


#include "Deck.h"

class SolitairePrime {
public:
    SolitairePrime();
    bool isPrime(int);
    void play();
private:
    Deck deck;
};


#endif //SOLITAIREPRIME_SOLITAIREPRIME_H
