//
//  shopping.hpp
//  shopping
//
//  Created by Sarah Carter on 11/16/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#ifndef shopping_hpp
#define shopping_hpp

#include <stdio.h>
#include <string>
#include <map>

struct product{
    double price;
    int units;
    std::string unittype;
};

std::map<std::string, product> inventory;
double Selection(const product &product, const int &units);

#endif /* shopping_hpp */
