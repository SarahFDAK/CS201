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
    if(Finish(str)){
        tokens.push_back("\n");
    }
    
    return int(tokens.size());
}


void AnalyzeTokens(const std::vector<std::string> & tokens){
    for(auto token: tokens){
        if(token[0] <= '9' && token[0] >='0'){
            std::cout << "[integer]" << '\t' << '\t' << "\"" << token << "\"" << std::endl;
        }
        else if(token[0] == '"' && token[token.size()-1] == '"'){
            std::cout << "[string]" << '\t' << '\t' << "\"\\" << token << "\\""\"" << std::endl;
        }
        else if(token[0] == '_' || (token[0] >='A' && token[0] <= 'z')){
            std::cout << "[identifier]" << '\t' << "\"" << token << "\"" << std::endl;
        }
        else if(token == "\n"){
            std::cout << "[whitespace]" << '\t' << "\"" "\"" << std::endl;
        }
        else {
            std::cout << "[unknown]" << '\t' << '\t' << "\"" << token << "\"" <<std::endl;
        }
    }
}


bool Finish(const std::string & str){
    if(str == "end" || str == "End" || str == "END"){
        return false;
    }

    return true;
}
