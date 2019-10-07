//
//  main.cpp
//  lab15
//
//  Created by Sarah Carter on 10/7/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include <string>


#include "stringRead.hpp"


int main(int argc, const char * argv[]) {
    std::string text;
    std::cout << "Enter a line of text, including integers.\n";
    std::getline(std::cin, text);
    if(stringReadBool(text)){
        std::cout << stringRead(text) << " is the square of the number in your entered text." << std::endl;
    }
    else{
        std::cout << "You didn't start your string with a number!" << std::endl;
    }
        
    return 0;
}
