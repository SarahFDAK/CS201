//
//  main.cpp
//  lab07
//
//  Created by Sarah Carter on 9/18/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include "intio.hpp"

int main(int argc, const char * argv[]) {
    int num = getInt();
    std::cout << "Your number was " << num << std::endl;
    putInt(num, 10);
    std::cout << std::endl;
    
    return 0;
}
