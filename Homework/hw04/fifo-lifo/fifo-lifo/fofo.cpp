//
//  fofo.cpp
//  fifo-lifo
//
//  Created by Sarah Carter on 10/15/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include "fofo.hpp"
#include <iostream>
#include <vector>

using std::vector;
using std::string;
using std::cout;


void FifoPush(vector<string> & container, const string & item){
    container.push_back(item);
}
