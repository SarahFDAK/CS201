//
//  main.cpp
//  shopping
//
//  Created by Sarah Carter on 11/11/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include <algorithm>
#include <map>
#include <iomanip>

#include "shopping.hpp"

using std::string;
using std::map;

struct product{
    double price;
    int units;
    std::string unittype;
};

int units = 1;
product butter{4.00, units, "pound"};
product bread{5.00, units, "loaf"};
product milk{3.50, units, "half gallon"};
product avocado{2.50, units, "each"};
product burger{1.57, units, "pound"};

std::map<std::string, product> inventory{
    {"Butter", butter},
    {"Bread", bread},
    {"Milk", milk},
    {"Avocado", avocado},
    {"Ground Beef", burger}
};

int main(int argc, const char * argv[]) {

    
    for(auto it: inventory){
        std::cout << std::setw(12) << it.first << ": $" << std:: fixed
        <<std::setprecision(2) << (it.second).price << "/" <<
        (it.second).unittype << std::endl;
    }
    
    return 0;
}
