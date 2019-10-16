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

//This function checks to see if the user entered a blank line. If so, it returns false.
bool ReadLine(std::string & str){
    
    if(str == ""){
        return false;
    }

    return true;
}

//This function takes the strings from user input that are separated by whitespace and pushes them into the tokens vector. It returns the number of elements in the vector when completed.
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

//This function analyzes the tokens that were placed in the vector by StringToTokensWS to find their types. It then prints the type as well as the token for the user.
void AnalyzeTokens(const std::vector<std::string> & tokens){
    for(auto token: tokens){
        if(token[0] <= '9' && token[0] >='0'){
            std::cout << "[integer]" << '\t' << "\"" << token << "\"" << std::endl;
        }
        else if(token[0] == '"' && token[token.size()-1] == '"'){
            std::cout << "[string]" << '\t' << "\"\\" << token << "\\""\"" << std::endl;
        }
        else if(token[0] == '_' || (token[0] >='A' && token[0] <= 'z')){
            std::cout << "[identifier]" << '\t' << "\"" << token << "\"" << std::endl;
        }
        else if(token == "\n"){
            std::cout << "[whitespace]" << '\t' << "\"" "\"" << std::endl;
        }
        else {
            std::cout << "[unknown]" << '\t' << "\"" << token << "\"" <<std::endl;
        }
    }
}

//This function checks if the user has entered the program termination string.
bool Finish(const std::string & str){
    if(str == "end" || str == "End" || str == "END"){
        return false;
    }

    return true;
}
