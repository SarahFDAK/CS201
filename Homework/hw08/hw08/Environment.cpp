//
//  Environment.cpp
//  hw08
//
//  Created by Sarah Carter on 11/29/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include "Environment.hpp"


void Environment::setHeaterStat(int onoff){
    _heaterStat = onoff;
}

void Environment::iteration(){
    if(_heaterStat == 0)
        _temperature --;
    _temperature ++;
}

int Environment::currentTemp(){
    return _temperature;
}
