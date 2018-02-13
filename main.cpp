// Kevin Empociello
// CECS 282-07
// Prog 1 - Solitaire Prime
// 02/12/2018

#include <iostream>
#include "Deck.h"
#include "SolitairePrime.h"
#include "Menu.h"

int main() {
    Menu menu = Menu();
    Deck *deck = NULL;

    std::cout << "Welcome to Solitaire Prime!" << std::endl;
    while (true) {
        menu.display();

        int choice = menu.getUserChoice();
        switch (choice) {
            case 1:
                deck = new Deck();

                break;
            case 2:
                if (deck == NULL) {
                    deck = new Deck();
                }

                deck->show();
                break;
            case 3:
                if (deck == NULL) {
                    deck = new Deck();
                }

                deck->shuffle();

                break;
            case 4:
                SolitairePrime().play();

                break;
            case 5:
                return 0;
            default:
                std::cout << "Please enter a number between 1 and 5" << std::endl;
        }
    }
}