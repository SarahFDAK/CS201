//
//  error-checks.cpp
//  caesar-cypher
//
//  Created by Sarah Carter on 11/24/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include "error-checks.hpp"

bool LettersOnly(const std::string &original){
    for(size_t i = 0; i < original.size(); i++){
        if(original[i] < 'A' || original[i] > 'z'){
            return false;
        }
    }
    return true;
}


