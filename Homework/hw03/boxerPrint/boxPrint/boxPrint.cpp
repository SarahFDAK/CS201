//
//  main.cpp
//  boxerPrint
//
//  Created by Sarah Carter on 9/23/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include "boxer.hpp"

int main(int argc, const char * argv[]) {
    std::string userWord;
    int userInt;
    std::cout << "Please enter a word and a positive integer (enter a 0 to exit): " << std::endl;
    std::cin >> userWord >> userInt;
    while(userInt < 0){
        std::cout << "Please enter a positive integer, or 0 to exit: " << std::endl;
        std::cin.clear();
        std::cin >> userInt;
    }
    while(userInt > 0){
        boxer(userWord, userInt);
        std::cout << "Please enter a word and a positive integer (enter a 0 to exit): " << std::endl;
        std::cin.clear();
        std::cin >> userWord >> userInt;
    }
    std::cout << "Thank you for your participation!\n";
    return 0;
}
