//
//  homework 3 - boxPrint.cpp
//  Sarah Carter
//  9/23/19
//  This program will request a word and a positive integer from the user, then will print a box of asterisks surrounding the word. The asterisk box size will correspond to the integer entered by the user.

#include <iostream>
#include "boxer.hpp"

int main(int argc, const char * argv[]) {
    //Get a word and an integer from the user
    std::string userWord;
    int userInt;
    
    //If they enter a positive integer, print the box, then ask for new input.
    do {
        std::cout << "Please enter a word and a positive integer (enter 'a 0' to exit): " << std::endl;
        std::cin >> userWord >> userInt;
        //Check if they entered a positive number. If not, ask for one. Keep asking until they give a positive number or enter 0 to exit.
        if(userInt < 0){
            std::cin.clear();
            continue;
        }
        boxer(userWord, userInt);
        std::cin.clear();
    } while(userInt > 0);
    //When they have entered 0, thank them and exit the program.
    std::cout << "Thank you for your participation!\n";
    return 0;
}
