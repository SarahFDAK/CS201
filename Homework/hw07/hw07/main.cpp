//
//  main.cpp
//  hw07
//
//  Created by Sarah Carter on 11/21/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include "Color3.hpp"
#include "Image3.hpp"

int main(int argc, const char * argv[]) {
    Color3 Black(255, 255, 255);
    int B = Black.weightedSum();
    std::cout << B << std::endl;
    return 0;
}
