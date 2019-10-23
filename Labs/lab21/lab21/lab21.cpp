//
//  main.cpp
//  lab21
//
//  Created by Sarah Carter on 10/23/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include <string>

#include "truncstruct.hpp"

int main(int argc, const char * argv[]) {
    std::string input;
    
    std::cout << "Input a string: \n";
    std::getline(std::cin, input);
    
    StringInfo Altered = trunc8(input);
    
    std::cout << Altered.str << std::endl;
    
    std::cout << "Input a string and an integer: \n";
    
    std::string input2;
    unsigned L;
    std::cin.clear();
    std::cin >> input2 >> L;
    
    StringInfo More { input2, L };
    std::cout << trunc(More).str << " " << trunc(More).len << std::endl;
    return 0;
}
