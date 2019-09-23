//
//  main.cpp
//  lab09
//
//  Created by Sarah Carter on 9/23/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include "modifyString.hpp"

int main(int argc, const char * argv[]) {
    std::string userWord;
    for(int i = 0; i < 3; i++){
        std::cout << "Enter a word to find its length: ";
        std::cin >> userWord;
        std::cout << "length: " << modifyString(userWord, 5) << std::endl;
        std::cout << "Edited word: " << userWord << std::endl;
    }
    return 0;
}
