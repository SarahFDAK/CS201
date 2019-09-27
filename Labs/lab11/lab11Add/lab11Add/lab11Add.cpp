//
//  main.cpp
//  lab11Add
//
//  Created by Sarah Carter on 9/27/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
    auto word = std::string("hi");
    std::cout << "Enter a word: " << std::endl;
    std::getline(std::cin, word);
    //Print only lowercase letters from user's word
    for(int i = 0; i < word.size(); i++){
        if(word[i] >= 'a' && word[i] <= 'z'){
            std::cout << word[i];
        }
    }
    std::cout << std::endl;
    for(int i = 0; i < word.size(); i++){
        if(word[i] <= 'Z' && word[i] >= 'A'){
            std::cout << word[i];
        }
    }
    std::cout << std::endl;
    return 0;
}
