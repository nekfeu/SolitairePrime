cmake_minimum_required(VERSION 3.9)
project(SolitairePrime)

set(CMAKE_CXX_STANDARD 11)

add_executable(SolitairePrime main.cpp Deck.cpp Deck.h Card.cpp Card.h Rank.h Suit.h Rank.cpp Suit.cpp)