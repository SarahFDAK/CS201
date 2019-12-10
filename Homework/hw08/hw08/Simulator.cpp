//
//  Simulator.cpp
//  hw08
//
//  Created by Sarah Carter on 11/29/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include "Simulator.hpp"

void Simulator::run(Environment &user, Agent &smith){
    while(true){
        int temp1;
        std::cout << "Current Room Temperature: " << user._temperature
        << std::endl;
        
        temp1 = askOwner();
        if(temp1 == -1){
            break;
        }
        smith._userTemp = temp1;
        for(int i = 1; i < 10; i++){
            smith.act(user);
            user.iteration();
            smith.perceive(user);
            smith.think();
        }
    }
}

int Simulator::askOwner(){
    int temp;
    std::cout <<"Set your desired thermostat temperature. Enter -1 to exit."
    << std::endl;
    std::cin >> temp;
    return temp;
}
