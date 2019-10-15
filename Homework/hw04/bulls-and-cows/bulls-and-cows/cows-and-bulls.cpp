//
//  main.cpp
//  bulls-and-cows
//
//  Created by Sarah Carter on 10/15/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include "guesscheck.hpp"

int main(int argc, const char * argv[]) {
    
    std::string answer = "1234";
    std::string guess;
    
    do {
        std::cout << "Guess what 4 digits are the answer. 4 bulls means you've guessed right, cows are the correct digit in the wrong place." << std::endl;
        
        std::cin >> guess;
        
        if(!CheckGuessLength(guess) || !CheckGuessType(guess)){
            std::cin.clear();
            std::cout << "Please enter 4 integers." << std::endl;
            std::cin >> guess;
        }
        
        std::cout << "Your guess has " << CountBulls(guess, answer) << " bulls and " << CountCows(guess, answer) - CountBulls(guess, answer) << " cows." << std::endl;
        
    } while(CountBulls(guess, answer) < answer.size());
    
    std::cout << guess << " is correct!" << std::endl;
    return 0;
}
