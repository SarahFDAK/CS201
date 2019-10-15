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
    
    std::istringstream token(str);
    std::string text;

    while(token >> text) {
        tokens.push_back(text);
    }

    return int(tokens.size());
}


void AnalyzeTokens(const std::vector<std::string> & tokens){
    for(auto token: tokens){
        std::cout << token << std::endl;
    }
}


bool Finish(const std::string & str){
    if(str == "end" || str == "End" || str == "END"){
        return false;
    }

    return true;
}
