//
//  shopping.hpp
//  shopping
//
//  Created by Sarah Carter on 11/17/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#ifndef shopping_hpp
#define shopping_hpp

#include <stdio.h>
#include <string>
#include <map>

using std::string;
using std::map;

struct product{
    double price;
    int units;
    std::string unittype;
};

void PrintProducts(const map<string, product> &inventory);
void PrintCart(const map<string, product> &cart);
bool ItemIsProduct(const string &item, const map<string,product>
                   &inventory);
double ShoppingCart(const map<string, product> &cart);
#endif /* shopping_hpp */
