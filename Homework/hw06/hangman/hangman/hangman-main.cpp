//
//  hangman-main.cpp
//  hw06
//  Sarah Carter
//  11/13/19
//  This program runs a hangman game for the user. It takes
//  letters as guesses and returns whether the guess is correct or
//  incorrect, building the hangman with each wrong guess.
//

#include <iostream>

#include "hangman.hpp"

int main(int argc, const char * argv[]) {
    Game();
    
    //Keep the console open until the user presses enter.
    std::cout << "Press Enter to Exit" << std::endl;
    std::cin.ignore();
    
    return 0;
}
