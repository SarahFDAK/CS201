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

//Create a new type called product
struct product{
    double price;
    int units;
    std::string unittype;
};

//declare function prototypes
void PrintProducts(const map<string, product> &inventory);
void PrintCart(const map<string, product> &cart);
bool ItemIsProduct(const string &item, const map<string,product>
                   &inventory);
double ShoppingCart(const map<string, product> &cart);
bool EmptyCart(const map<string, product> &cart);

#endif /* shopping_hpp */
