//
//  Agent.cpp
//  hw08
//
//  Created by Sarah Carter on 11/29/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include "Agent.hpp"
#include <iostream>

void Agent::perceive(Environment &user){
    _currentTemp = user.tempNow();
    std::cout << "Perceive: The thermostat reads temp: " << _currentTemp
    << std::endl;
}

int Agent::think(){
    if(_currentTemp < _userTemp){
        std::cout << "Think: Turn the heater on." << std::endl;
        return 1;
    }
    else{
        std::cout << "Think: Turn the heater off." << std::endl;
        return 0;
    }
}

void Agent::act(Environment &user){
    user.setHeaterStat(think());
    if(user._heaterStat == 1){
        std::cout << "Act: Thermostat has turned heater on.\n" << std::endl;
    }
    else
        std::cout << "Act: Thermostat has turned heater off.\n" << std::endl;
}
