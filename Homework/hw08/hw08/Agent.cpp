//
//  Agent.cpp
//  hw08
//
//  Created by Sarah Carter on 11/29/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include "Agent.hpp"
#include <iostream>

void Agent::perceive(Environment user){
    _currentTemp = user.tempNow();
}

int Agent::think(){
    if(_currentTemp < _userTemp)
        return 1;
    return 0;
}

void Agent::act(Environment user){
    user.setHeaterStat(think());
    std::cout << user._heaterStat << std::endl;
}
