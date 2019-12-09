//
//  Agent.cpp
//  hw08
//
//  Created by Sarah Carter on 11/29/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include "Agent.hpp"

void Agent::perceive(Environment user){
    _currentTemp = user.tempNow();
}
