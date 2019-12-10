//
//  Environment.cpp
//  hw08
//
//  Created by Sarah Carter on 11/29/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include "Environment.hpp"
#include <iostream>


void Environment::iteration(){
    if(_heaterStat == 1)
        _temperature ++;
    else
        _temperature --;
    std::cout << "Environment's temp: " << _temperature << std::endl;
}

void Environment::setHeaterStat(int onoff){
    _heaterStat = onoff;
    if(_heaterStat == 1)
        std::cout << "The heater is on." << std::endl;
    else
        std::cout << "The heater is off." << std::endl;
}

int Environment::tempNow() const{
    return _temperature;
}
