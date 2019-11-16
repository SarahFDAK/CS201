//
//  main.cpp
//  shopping
//
//  Created by Sarah Carter on 11/11/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include <iomanip>

#include "shopping.hpp"

using std::string;
using std::map;

int main(int argc, const char * argv[]) {

    
    for(auto it: inventory){
        std::cout << std::setw(12) << it.first << ": $" << std:: fixed
        <<std::setprecision(2) << (it.second).price << "/" <<
        (it.second).unittype << std::endl;
    }
    
    return 0;
}
