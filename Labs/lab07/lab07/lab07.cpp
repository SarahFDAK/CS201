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
    int input = 0;
    for(std::cin >> input; input >0; ){
        putInt(getInt(), 10);
        std::cout << std::endl;
    }
    
    return 0;
}
