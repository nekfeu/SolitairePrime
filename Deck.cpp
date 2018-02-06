//
// Created by Kévin Empociello on 05/02/2018.
//

#include "Deck.h"

Deck::Deck() {
    int index = 0;

    for (int rank = ACE; rank <= KING; rank++) {
        for (int suit = SPADES; suit <= CLUBS; suit++) {
            this->cards[index++] = new Card(static_cast<Rank>(rank), static_cast<Suit>(suit));
        }
    }
}

void Deck::refresh() {
}

Card* Deck::deal() {
    int index = cardsLeft() - 1;

    while (cards[index] == NULL) {
        index--;
    }

    Card *card = cards[index];
    cards[index] = NULL;

    return card;
}

void Deck::shuffle() {
    int index;
    Card* switchTmp;

    for (int i = 0; i < 52; i++) {
        index = rand() % 52;

        switchTmp = cards[index];
        cards[index] = cards[i];
        cards[i] = switchTmp;
    }
}

int Deck::cardsLeft() {
    int count = 0;

    for (Card* card: cards) {
        if (card != NULL) {
            count++;
        }
    }

    return count;
}

void Deck::show() {
    for (int i = 0; i < 52 ; i++) {
        std::cout << cards[i] << std::endl;
    }
}
