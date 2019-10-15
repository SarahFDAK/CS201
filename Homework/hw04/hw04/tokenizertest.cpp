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
//        StringToTokensWS(str, tokens);
    } while (ReadLine(str));
    
    std::cout << tokens.size();
    
    AnalyzeTokens(tokens);
    return 0;
}

