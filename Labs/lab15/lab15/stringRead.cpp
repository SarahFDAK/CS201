//
//  stringRead.cpp
//  lab15
//
//  Created by Sarah Carter on 10/7/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include "stringRead.hpp"
#include <iostream>
#include <string>
#include <sstream>

using std::istringstream;

int stringRead(std::string & text){
    int num;
    istringstream userText(text);
    userText >> num;
    
    if(!userText){
        std::cerr << "There are no numbers in what you entered." << std::endl;
    }
    
    num = num * num;
    return num;
}


bool stringReadBool(std::string & text){
    int num;
    istringstream userText(text);
    userText >> num;
    bool isNum = true;
    if(!userText){
        isNum = false;
    }
    return isNum;
}
