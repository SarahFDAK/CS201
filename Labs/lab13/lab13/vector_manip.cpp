//
//  main.cpp
//  lab13
//
//  Created by Sarah Carter on 10/2/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include <vector>
#include "vector_manip.hpp"

using std::vector;

void vectorManip(std::vector<std::string> & words) {
    for(std::string & n : words){
        std::cout << n << " ";
    }
}

void firstLetterChange(std::vector<std::string> & words, char & ch){
    for(std::string & n : words){
        if(n.size()>0){
            n[0] = ch;
        }
        std::cout << n << " ";
    }
}
