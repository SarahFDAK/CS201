//
//  thermostat.main.cpp
//  Sarah Carter
//  12/7/19
//  This program creates an interactive environment that asks the user for
//  their desired room temperature, then reports the activities of the
//  thermostat and heater, as well as the changes in room temperature. Every
//  ten loops, it checks in with the user for a temperature.

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
