//
//  isDiv3.cpp
//  lab10
//
//  Created by Sarah Carter on 9/25/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include "isDiv3.hpp"
#include <iostream>

bool isDiv3(int n){
    bool div = false;
    if(n % 3 == 0){
        div = true;
    }
    return div;
}

bool isADivB(int a, int b){
    if(a % b == 0){
        return true;
    }
    return false;
}
