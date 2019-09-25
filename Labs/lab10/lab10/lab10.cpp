//
//  main.cpp
//  lab10
//
//  Created by Sarah Carter on 9/25/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include "isDiv3.hpp"

int main(int argc, const char * argv[]) {
    for(int i = 1; i <= 40; i++){
        if(isDiv3(i)){
            std::cout << i << " " << std::endl;
        }
    }
    int a = 0;
    int b = 0;
    std::cout << "Enter a number: \n";
    std::cin >> a;
    std::cout << "Enter a second number to divide into the first: \n";
    std::cin >> b;
    for(int i = 1; i <= a; i++){
        if(isADivB(i, b)){
            std::cout << i << " ";
        }
    }
    return 0;
}
