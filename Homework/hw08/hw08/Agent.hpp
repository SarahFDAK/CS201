//
//  Agent.hpp
//  hw08
//
//  Created by Sarah Carter on 11/29/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#ifndef Agent_hpp
#define Agent_hpp

#include "Environment.hpp"

//Declare Agent class, methods, and members.
class Agent {
public:
    Agent(){};
    int _userTemp;
    
    void perceive(Environment &user);
    int think() const;
    void act(Environment &user);
    
private:
    int _currentTemp;
    int _heaterOn;
};

#endif /* Agent_hpp */
