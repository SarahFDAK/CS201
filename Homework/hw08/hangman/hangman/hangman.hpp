//
//  hangman.hpp
//  hangman
//
//  Created by Sarah Carter on 11/10/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#ifndef hangman_hpp
#define hangman_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <map>

std::string SelectWord(std::map<int, std::string> & word, const int &key);
int SelectRandomKey(std::map<int, std::string> &word);
void Game();
std::string assignVector(std::string &sln, const char &guess);

#endif /* hangman_hpp */
