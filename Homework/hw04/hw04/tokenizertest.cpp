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
    while (Finish(str)) {
        std::getline(std::cin, str);
        StringToTokensWS(str, tokens);
    } 
    
    std::cout << tokens.size() << std::endl;
    
    AnalyzeTokens(tokens);
    return 0;
}

