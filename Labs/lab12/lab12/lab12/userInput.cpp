//
//  main.cpp
//  lab12
//
//  Created by Sarah Carter on 9/30/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>

void getUserStrings(std::vector<std::string> & words) {
    std::string input;
    while(std::cin >>input){
        if(input == "end"){
            break;
        }
        else {
            words.push_back(input);
        }
    }
}
