//
//  main.cpp
//  lab20
//
//  Created by Sarah Carter on 10/21/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <iomanip>

int main(int argc, const char * argv[]) {
    for(int i = 0; i <= 180; i += 5){
        double radian = i * M_PI/180.00;
        std::cout << std::setw(3) << i << " " << std::fixed <<std::setw(11) << std::setprecision(8)<< cos(radian) << std::endl;
    }
    return 0;
}
