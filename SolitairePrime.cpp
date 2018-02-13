//
// Created by Kévin Empociello on 06/02/2018.
//

#include "SolitairePrime.h"

SolitairePrime::SolitairePrime() {
    this->deck = Deck();
}

bool SolitairePrime::isPrime(int number) {
    if (number != 2) {
        if (number < 2 || number % 2 == 0) {
            return false;
        }

        for (int i = 3; i * i <= number; i+=2) {
            if (number % i == 0) {
                return false;
            }
        }
    }

    return true;
}

void SolitairePrime::play() {
    int total = 0;
    int round = 1;

    this->deck.shuffle();
    while (this->deck.cardsLeft() > 0) {

        do {
            Card *card = deck.deal();

            total += card->getValue();
            std::cout << card << ", ";
        } while (!isPrime(total) && this->deck.cardsLeft() > 0);

        if (isPrime(total)) {
            std::cout << "Prime: " << total << std::endl << std::endl;
            if (this->deck.cardsLeft() == 0) {
                std::cout << "Winner in " << round << " hands!" << std::endl;
            }
        } else {
            std::cout << "Loser" << std::endl;
        }

        total = 0;
        round++;
    }
}
