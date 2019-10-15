//
//  main.cpp
//  hw04
//
//  Created by Sarah Carter on 10/13/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include <vector>
#include "tokenizer.hpp"

int main(int argc, const char * argv[]) {
    std::string str;
    std::vector<std::string> tokens;
    
    std::cout << "Please enter a string - it can contain spaces and numbers. Type \"end\" or \"End\" or \"END\" to finish your input: \n";
    do {
        std::getline(std::cin, str);
        std::cout << str << std::endl;
    } while (ReadLine(str) && str != "end");
//    std::cout << StringToTokensWS(str, tokens) << std::endl;

    
    return 0;
}

