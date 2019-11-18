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
#include <cctype>
#include <vector>
#include <iomanip>
#include <sstream>

#include "shopping.hpp"

using std::string;
using std::map;


int main(int argc, const char * argv[]) {
    map<std::string, product> inventory{
        {"Butter", {3.00, 0, "pound"}},
        {"Bread", {3.29, 0, "loaf"}},
        {"Milk", {3.50, 0, "half gallon"}},
        {"Avocado", {2.50, 0, "avocado"}},
        {"Ground Beef", {1.57, 0, "pound"}}
    };
    
    char input;
    string item;
    int itemcount;
    std::map<string,product> cart;
    
    while(true){
        std::cout << "Enter \"S\" to select purchases, \"V\" to view your cart, "
        "\"D\" to delete an item in your cart, or \"E\" to finish." << std::endl;
        std::cin >> input;
        
        if(std::toupper(input) == 'S'){
            std::cin.ignore();
            PrintProducts(inventory);
            std::cout << "\nWhich product would you like? " << std::endl;
            std::getline(std::cin, item);
            
            for(auto p: inventory){
                if(item == p.first){
                    cart[item] = inventory[item];
                    if(item == "Bread"){
                        std::cout << "Enter how many loaves you want: " << std::endl;
                        }
                    else
                        std::cout << "Enter how many " << (p.second).unittype << "s you want: " << std::endl;
                std::cin >> itemcount;
                (cart[item]).units = itemcount;
                std::cin.ignore();
                }
            }
        }
        else if(std::toupper(input) == 'V'){
            PrintCart(cart);
        }
        else if(std::toupper(input) == 'D'){
            
        }
        else break;
    }
    
//    double TotalCost = SelectionCost(inventory[item], itemcount);
//    std::cout << TotalCost << std::endl;

    return 0;
}
