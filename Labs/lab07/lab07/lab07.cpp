//
//  main.cpp
//  lab07
//
//  Created by Sarah Carter on 9/18/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include "intio.hpp"
#include "mysource.hpp"

int main(int argc, const char * argv[]) {
    askForInput();
    int num = getInt();
    askForInput();
    int num1 = getInt();
    askForInput();
    int num2 = getInt();
    putInt(num, 10);
    std::cout << std::endl;
    putInt(num1, 10);
    std::cout << std::endl;
    putInt(num2, 10);
    std::cout << std::endl;
    
    return 0;
}
