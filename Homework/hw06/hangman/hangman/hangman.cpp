//
//  hangman.cpp
//  hangman
//
//  Created by Sarah Carter on 11/10/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <map>
#include <random>
#include "hangman.hpp"

using std::string;
using std::uniform_int_distribution;
using std::mt19937;
using std::random_device;

string wordChoice(const int &key){
    std::map<int, string> word{
        {1, "maple"},
        {2, "general"},
        {3, "razor"},
        {4, "giraffe"},
        {5, "ottoman"},
        {6, "hexagon"},
        {7, "highway"},
        {8, "automobile"},
        {9, "computer"},
        {10, "initialize"}
    };
    return word.at(key);
}

int keyChoice(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> d(1, 10);
    return d(gen);
}

