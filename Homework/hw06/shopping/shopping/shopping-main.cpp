//
//  main.cpp
//  shopping
//
//  Created by Sarah Carter on 11/11/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <iomanip>
#include <sstream>

using std::string;
using std::map;

struct product{
    double price;
    int units;
    std::string unittype;
};

double SelectionCost(const product &prod, const int &unitnum){
    double totalcost = prod.price * unitnum;
    return totalcost;
}

int main(int argc, const char * argv[]) {
    map<std::string, product> inventory{
        {"Butter", {3.00, 0, "pound"}},
        {"Bread", {3.29, 0, "loaf"}},
        {"Milk", {3.50, 0, "half gallon"}},
        {"Avocado", {2.50, 0, "avocado"}},
        {"Ground Beef", {1.57, 0, "pound"}}
    };
    
    string item;
    int itemcount;

    std::cout << "Which item do you want to buy? " << std::endl;
    std::getline(std::cin, item);
    for(auto p: inventory){
        if(item == p.first){
            if(item == "Bread"){
                std::cout << "Enter how many loaves you want: " << std::endl;
            }
            else
                std::cout << "Enter how many " << (p.second).unittype << "s you want: " << std::endl;
            std::cin >> itemcount;
            std::cin.ignore();
        }
    }
    
      
    for(auto it: inventory){
        std::cout << std::setw(12) << it.first << ": $" << std:: fixed
        <<std::setprecision(2) << (it.second).price << "/" <<
        (it.second).unittype << std::endl;
    }
    
    double TotalCost = SelectionCost(inventory[item], itemcount);
    std::cout << TotalCost << std::endl;

    return 0;
}
