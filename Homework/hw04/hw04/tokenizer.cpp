//
//  tokenizer.cpp
//  hw04
//
//  Created by Sarah Carter on 10/13/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include "tokenizer.hpp"
#include <vector>
#include <iostream>
#include <string>
#include <sstream>

bool ReadLine(std::string & str){
    
    if(str == ""){
        return false;
    }

    return true;
}


unsigned StringToTokensWS(std::string & str, std::vector<std::string> & tokens){
    {
        std::istringstream tok(str);
        std::string token;
        tok >> token;
        tokens.push_back(token);
        std::cout << std::endl;
    }
    return int(tokens.size());
}


void AnalyzeTokens(const std::vector<std::string> & tokens){
    
}
