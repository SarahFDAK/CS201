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
        if(token[0] <= '9' && token[0] >='0'){
            std::cout << "Integer" << "\"" << token << "\"" << std::endl;
        }
        else if(token[0] == '"' && token[token.size()-1] == '"'){
            std::cout << "String" << "\"" << token << "\"" << std::endl;
        }
        else if(token[0] == '_' || (token[0] >='A' && token[0] <= 'z')){
            std::cout << "Identifier" << "\"" << token << "\"" << std::endl;
        }
        else if(token == " "){
            std::cout << "Whitespace ""\"" "\"" << std::endl;
        }
        else {
            std::cout << "Unknown" << "\"" << token << "\"" <<std::endl;
        }
    }
}


bool Finish(const std::string & str){
    if(str == "end" || str == "End" || str == "END"){
        return false;
    }

    return true;
}
