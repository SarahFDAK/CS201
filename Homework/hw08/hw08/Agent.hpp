//
//  Agent.hpp
//  hw08
//
//  Created by Sarah Carter on 11/29/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#ifndef Agent_hpp
#define Agent_hpp

#include <stdio.h>
#include "Environment.hpp"

class Agent {
public:
    Agent(){};
    
    void perceive(Environment currentTemp());
    void think();
    void act(Environment);
    
private:
    int _currentTemp;
    int _userTemp;
    bool _heaterOn;
};

#endif /* Agent_hpp */
