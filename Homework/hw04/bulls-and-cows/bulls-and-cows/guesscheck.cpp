//
//  guesscheck.cpp
//  bulls-and-cows
//
//  Created by Sarah Carter on 10/15/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include "guesscheck.hpp"
#include <iostream>

bool CheckGuessLength(const std::string & guess){
    if(guess.size() != 4){
        return false;
    }
    return true;
}


bool CheckGuessType(const std::string & guess){
    for(int i = 0; i < guess.size(); i++){
        if(guess[i] < '0' || guess[i] > '9'){
            return false;
        }
    }
    return true;
}


int CountBulls(const std::string & guess, const std::string & answer){
    int bcount = 0;
    for(int b = 0; b < answer.size(); b++){
        if(guess[b] == answer[b]){
            bcount++;
        }
    }
    return bcount;
}

