//
//  Simulator.hpp
//  hw08
//
//  Created by Sarah Carter on 11/29/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#ifndef Simulator_hpp
#define Simulator_hpp

#include "Agent.hpp"

class Simulator {
public:
    Simulator() {};
    void run(Environment &user, Agent &smith);
    int askOwner();
};

#endif /* Simulator_hpp */
