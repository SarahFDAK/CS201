//
//  boxer.cpp
//  boxerPrint
//
//  Created by Sarah Carter on 9/23/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include "boxer.hpp"
#include <iostream>

//Declare function prototypes
void printMiddle(int userInt, int length);
void printAllAsterisks(int userInt, int length);
void printSideStars(int userInt, int length);

void boxer(std::string userWord, int userInt){
    //Calculate the length of the word entered by the user
    int length = userWord.size();
    //Call various print functions to create the asterisk box around the word.
    printAllAsterisks(userInt, length);
    printMiddle(userInt, length);
    printSideStars(userInt, length);
    std::cout << " " << userWord << " ";
    printSideStars(userInt, length);
    std::cout << std::endl;
    printMiddle(userInt, length);
    printAllAsterisks(userInt, length);
}
//Prints the line above and below the word
void printMiddle(int userInt, int length){
    printSideStars(userInt, length);
    for (int l = 0; l < (length + 2); l++){
        std::cout << " ";
    }
    printSideStars(userInt, length);
    std::cout << std::endl;
}
//Prints the blocks of asterisks at top and bottom of the box
void printAllAsterisks(int userInt, int length){
    for (int i = 0; i < userInt; i++){
        for (int j = 0; j < (2*userInt)+length +2; j++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}
//Prints the asterisks to the left and right of the word
void printSideStars(int userInt, int length){
    for (int k = 0; k < userInt; k++){
        std::cout << "*";
    }
}
