//
//  error-checks.cpp
//  caesar-cypher
//
//  Created by Sarah Carter on 11/24/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include "encryption.hpp"

std::string encrypt(const std::string &original, const int &shift){
    std::string shifted = original;

    for(size_t i = 0; i < original.size(); i++){
        if(original[i] >= 'A' || original[i] <= ('Z' - shift) || original[i] >= 'a'
           || original[i] <= ('z' - shift)){
            shifted[i] = original[i] + shift;
        }
        else if (original[i] > ('Z' - shift)){
            shifted[i] = original[i] + shift - 'A';
        }
        else if (original[i] > ('z' - shift)){
            shifted[i] = original[i] + shift - 'a';
        }
        else
            shifted[i] = original[i];
    }
    return shifted;
}


