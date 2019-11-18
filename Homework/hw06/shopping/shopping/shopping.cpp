//
//  shopping.cpp
//  shopping
//
//  Created by Sarah Carter on 11/17/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <vector>
#include <numeric>

#include "shopping.hpp"

using std::string;
using std::cout;
using std::endl;
using std::map;
using std::vector;

void PrintProducts(const map<string, product> &inventory){
    for(auto it:inventory){
        cout << std::setw(12) << it.first << ": $" << std::fixed
        <<std::setprecision(2) << (it.second).price << "/" <<
        (it.second).unittype << endl;
    }
}

void PrintCart(const map<string, product> &cart){
    for(auto it:cart){
        auto f = it.first;
        auto s = it.second;

        cout << s.units << " " << f << " - " << s.unittype
        << "   Total: $" << std::fixed << std::setprecision(2)
        << (s.price * s.units) << endl;
    }
    cout << "Cart Total: $" << ShoppingCart(cart) << "\n" << endl;
}

bool ItemIsProduct(const string &item, const map<string,product> &inventory){
    bool isitem = true;
    for(auto it:inventory){
        isitem = (it.first == item);
    }
    return isitem;
}

double ShoppingCart(const map<string, product> &cart){
    vector<double> items;
    for(auto it:cart){
        auto s = it.second;
        items.push_back(s.price * s.units);
    }
    double totalcost = std::accumulate(items.begin(), items.end(), 0.00);
    return totalcost;
}
        
