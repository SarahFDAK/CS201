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
