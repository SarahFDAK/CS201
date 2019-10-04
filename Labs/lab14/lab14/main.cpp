//
//  main.cpp
//  lab14
//
//  Created by Sarah Carter on 10/4/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include "wordShrink.hpp"

int main(int argc, const char * argv[]) {
    std::string userWord;
    std::cout << "Enter a single word: \n";
    std::cin >> userWord;
    wordShrink(userWord);
    wordShrinkCenter(userWord);
    return 0;
}
