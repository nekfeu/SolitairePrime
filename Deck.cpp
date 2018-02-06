//
// Created by Kévin Empociello on 05/02/2018.
//

#include "Deck.h"

Deck::Deck() {
    int index = 0;

    for (int rank = ACE; rank <= KING; rank++) {
        for (int suit = SPADES; suit <= CLUBS; suit++) {
            this->cards[index++] = Card(static_cast<Rank>(rank), static_cast<Suit>(suit));
        }
    }
}

void Deck::refresh() {
}

Card Deck::deal() {
    return Card();
}

void Deck::shuffle() {

}

int Deck::cardsLeft() {
    return 0;
}

void Deck::show() {
    for (int i = 0; i < 52 ; i++) {
        std::cout << cards[i] << std::endl;
    }
}
