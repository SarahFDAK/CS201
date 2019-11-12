//
//  main.cpp
//  shopping
//
//  Created by Sarah Carter on 11/11/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include <string>
#include <map>
#include <algorithm>

using std::string;
using std::map;

struct prod{
    double price;
    int units;
};

int main(int argc, const char * argv[]) {
    prod exman;
    exman.price = 215.00;
    exman.units = 1;
    map<string, prod> items = {
        {"Exhaust manifold", exman},
    };
    
    return 0;
}
