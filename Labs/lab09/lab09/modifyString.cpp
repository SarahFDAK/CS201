//
//  modifyString.cpp
//  lab09
//
//  Created by Sarah Carter on 9/23/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include <string>
#include "modifyString.hpp"

int modifyString(std::string & refString, int n){
    int length = refString.size();
    std::string nConvert = std::to_string(n);
    refString = refString + nConvert;
    return length;
}
