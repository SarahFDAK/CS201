//
//  Environment.cpp
//  hw08
//
//  Created by Sarah Carter on 11/29/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include "Environment.hpp"
#include <iostream>

//Check if the heater is on or off. If on, increase the temperature; if
//off, decrease the temperature. Print what the temperature is.
void Environment::iteration(){
    if(_heaterStat == 1)
        _temperature ++;
    else
        _temperature --;
    std::cout << "Environment's temp: " << _temperature << std::endl;
}

//Set the heater to 1 or 0 to indicate if it's on or off and print its status.
void Environment::setHeaterStat(int onoff){
    _heaterStat = onoff;
    if(_heaterStat == 1)
        std::cout << "The heater is on." << std::endl;
    else
        std::cout << "The heater is off." << std::endl;
}

//Return the current temperature of the environment.
int Environment::tempNow() const{
    return _temperature;
}
