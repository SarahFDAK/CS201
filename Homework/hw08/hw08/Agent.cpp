//
//  Agent.cpp
//  hw08
//
//  Created by Sarah Carter on 11/29/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include "Agent.hpp"
#include <iostream>

//Set the temperature read by the thermostat to the environment's current
//temperature. Print that the thermostat reads this.
void Agent::perceive(Environment &user){
    _currentTemp = user.tempNow();
    std::cout << "Perceive: The thermostat reads temp: " << _currentTemp
    << std::endl;
}

//Check if the current temperature is less than what the user requested.
//Report the thermostat's decision to turn the heater on or off and return
//1 or 0, depending on that choice.
int Agent::think() const{
    if(_currentTemp < _userTemp){
        std::cout << "Think: Turn the heater on." << std::endl;
        return 1;
    }
    else{
        std::cout << "Think: Turn the heater off." << std::endl;
        return 0;
    }
}

//Call the think() function above and use it to set the heater status to on
//or off. Report if the heater was turned on or off.
void Agent::act(Environment &user){
    int t = think();
    user.setHeaterStat(t);
    if(t == 1){
        std::cout << "Act: Thermostat has turned heater on.\n" << std::endl;
    }
    else
        std::cout << "Act: Thermostat has turned heater off.\n" << std::endl;
}
