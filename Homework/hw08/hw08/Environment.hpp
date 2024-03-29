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
#include <iostream>

//Declare Environment class, methods, and members. Set default environment
//to 70 degrees with the heater off.
class Environment{
public:
    Environment() : _temperature(70), _heaterStat(0) {};
    
    void iteration();
    void setHeaterStat(int onoff);
    int tempNow() const;
        
private:
    int _temperature;
    int _heaterStat;
};


#endif /* Environment_hpp */
