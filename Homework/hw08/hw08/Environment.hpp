//
//  Environment.hpp
//  hw08
//
//  Created by Sarah Carter on 11/29/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#ifndef Environment_hpp
#define Environment_hpp

#include <stdio.h>

class Environment{
public:
    Environment() : _temperature(70), _heater(0){
    }
    
    Environment(int temp) : _temperature(temp){
    }
    
    void setTemp(int temp){
        _temperature = temp;
    }
    
private:
    int _temperature;
    bool _heater;
};


#endif /* Environment_hpp */
