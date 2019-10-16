//
//  bulls-and-cows.cpp
//  Sarah Carter
//  10/15/19
//  This program requests four digits from the user and reports back (in the form of bulls and cows) how many correct digits the user's guess has and if they are in the correct positions.
//

#include <iostream>
#include "guesscheck.hpp"

int main(int argc, const char * argv[]) {
    //Set answer and declare guess string
    std::string answer = "5740";
    std::string guess;
    //Loop through guesses until there are 4 correct
    do {
        std::cout << "Guess what 4 digits are the answer. 4 bulls means you've guessed right, cows are the correct digit in the wrong place." << std::endl;
        
        std::cin >> guess;
        //Checks if guess is 4 characters long and if characters are integers
        if(!CheckGuessLength(guess) || !CheckGuessType(guess)){
            std::cin.clear();
            std::cout << "Please enter 4 integers." << std::endl;
            std::cin >> guess;
        }
        //Reports not totally correct answer status. CountCows function counts total number of correct numbers, regardless of placement, thus duplicating CountBulls; therefore the actual "cows" number is CountCows-CountBulls.
        std::cout << "Your guess has " << CountBulls(guess, answer) << " bulls and " << CountCows(guess, answer) - CountBulls(guess, answer) << " cows." << std::endl;
        
    } while(CountBulls(guess, answer) < answer.size());
    //Prints correct guess
    std::cout << guess << " is correct!" << std::endl;
    return 0;
}
