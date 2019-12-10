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

//Declare Simulator class and methods
class Simulator {
public:
    Simulator() {};
    void run(Environment &user, Agent &smith) const;
    int askOwner() const;
};

#endif /* Simulator_hpp */
