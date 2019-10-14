//
//  main.cpp
//  hw04
//
//  Created by Sarah Carter on 10/13/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include "tokenizer.hpp"

int main(int argc, const char * argv[]) {
    std::string str;
    
    do{
        std::cout << "Please enter a string - it can contain spaces and numbers: \n";
        std::getline(std::cin, str);
    } while(ReadLine(str));
    return 0;
}

