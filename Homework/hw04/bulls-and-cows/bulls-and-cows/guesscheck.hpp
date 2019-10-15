//
//  guesscheck.hpp
//  bulls-and-cows
//
//  Created by Sarah Carter on 10/15/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#ifndef guesscheck_hpp
#define guesscheck_hpp

#include <stdio.h>
#include <iostream>

bool CheckGuessLength(const std::string & guess);
bool CheckGuessType(const std::string & guess);
int CountBulls(const std::string & guess, const std::string & answer);
int CountCows(const std::string & guess, const std::string & answer);

#endif /* guesscheck_hpp */
