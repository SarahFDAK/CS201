//
//  Simulator.cpp
//  hw08
//
//  Created by Sarah Carter on 11/29/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include "Simulator.hpp"

//Main run function
void Simulator::run(Environment &user, Agent &smith) const{
    //Keep the loop going until user exits
    while(true){
        int temp1;
        std::cout << "Current Room Temperature: " << user.tempNow()
        << std::endl;
        //Ask user for desired temperature and set it to a variable
        temp1 = askOwner();
        //Check if user entered -1 to exit program
        if(temp1 == -1){
            break;
        }
        smith._userTemp = temp1;
        std::cout << "Requested Temperature: " << smith._userTemp
        << std::endl;
        //Loop through relevant functions to handle room temperature and
        //heater status. Agent.think() function is called within act()
        for(int i = 1; i < 10; i++){
            user.iteration();
            smith.perceive(user);
            smith.act(user);
        }
    }
}

//Ask for the user's desired temperature
int Simulator::askOwner() const{
    int temp;
    std::cout <<"Set your desired thermostat temperature. Enter -1 to exit."
    << std::endl;
    std::cin >> temp;
    return temp;
}
