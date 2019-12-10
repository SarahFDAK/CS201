//
//  main.cpp
//  hw08
//
//  Created by Sarah Carter on 11/29/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>

#include "Simulator.hpp"

int main(int argc, const char * argv[]) {
    //Create objects for use in the program
    Environment user {};
    Agent smith {};
    Simulator thermostat {};
    
    //Run the simulator.
    thermostat.run(user, smith);
    
    return 0;
}
