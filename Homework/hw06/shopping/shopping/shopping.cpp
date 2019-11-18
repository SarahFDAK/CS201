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

//Print the items the user can purchase
void PrintProducts(const map<string, product> &inventory){
    for(auto it:inventory){
        cout << std::setw(12) << it.first << ": $" << std::fixed
        <<std::setprecision(2) << (it.second).price << "/" <<
        (it.second).unittype << endl;
    }
}

//Check if the shopping cart is empty
bool EmptyCart(const map<string, product> &cart){
    if(cart.empty()){
        std::cout << "You have nothing in your cart.\n" << std::endl;
    }
    return cart.empty();
}

//Print the contents of the shopping cart
void PrintCart(const map<string, product> &cart){
    for(auto it:cart){
        auto f = it.first;
        auto s = it.second;

        cout << s.units << " " << f << " - " << s.unittype
        << "   Total: $" << std::fixed << std::setprecision(2)
        << (s.price * s.units) << endl;
    }
    //Prints the total cost of the cart's contents
    cout << "Cart Total: $" << ShoppingCart(cart) << "\n" << endl;
}

//Check if the requested item is one of the available products
bool ItemIsProduct(const string &item, const map<string,product> &inventory){
    bool isitem = true;
    for(auto it:inventory){
        if(item == it.first){
            return isitem;
        }
    }
    return false;
}

//Calculate the total cost of the shopping cart contents
double ShoppingCart(const map<string, product> &cart){
    vector<double> items;
    for(auto it:cart){
        auto s = it.second;
        items.push_back(s.price * s.units);
    }
    double totalcost = std::accumulate(items.begin(), items.end(), 0.00);
    return totalcost;
}
        
