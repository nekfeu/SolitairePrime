#include <iostream>
#include "Deck.h"

int main() {
    Deck deck = Deck();

    deck.shuffle();
    deck.shuffle();

    deck.show();


    return 0;
}