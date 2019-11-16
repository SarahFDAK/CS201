//
//  shopping.cpp
//  shopping
//
//  Created by Sarah Carter on 11/16/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <map>

#include "shopping.hpp"

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

double Selection(const product &product, const int &units){
    auto totalcost = product.price * units;
    return totalcost;
}
