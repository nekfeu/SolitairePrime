//
// Created by Kévin Empociello on 06/02/2018.
//

#include "Menu.h"

Menu::Menu() {
}

void Menu::display() {
    std::cout << "\n1) New Deck" << std::endl;
    std::cout << "2) Display Deck" << std::endl;
    std::cout << "3) Shuffle Deck" << std::endl;
    std::cout << "4) Play Solitaire Prime" << std::endl;
    std::cout << "5) Exit" << std::endl;

    std::cout << "\nWhat is your choice ?" << std::endl;
}

int Menu::getUserChoice() {
    std::string choice;

    std::cin >> choice;

    try {
        int value = stoi(choice);

        return value;
    }
    catch(...) {
        return -1;
    }
}