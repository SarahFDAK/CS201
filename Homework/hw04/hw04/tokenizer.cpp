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

bool ReadLine(std::string & str){
    std::cout << "Please enter a sentence or other type of string: \n";
    std::getline(std::cin, str);
    if(str == ""){
        return false;
    }
    return true;
}


unsigned StringToTokensWS(std::vector<std::string> & tokens){
    
}
