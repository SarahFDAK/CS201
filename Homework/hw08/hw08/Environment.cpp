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
    std::cout << "Environment's hs " << _heaterStat << std::endl;
    if(_heaterStat == 1)
        _temperature ++;
    else
        _temperature --;
}

void Environment::setHeaterStat(int onoff){
    _heaterStat = onoff;
}

int Environment::tempNow() const{
    return _temperature;
}
