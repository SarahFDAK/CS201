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
        {"Produce", {2.50, 0, "item"}},
        {"Meat", {1.57, 0, "pound"}}
    };
    
    char input;
    string item;
    int itemcount;
    std::map<string,product> cart;
    
    while(true){
        std::cout << "Enter \"S\" to select purchases, \"V\" to view your cart, "
        "\E\" to edit an item, \"D\" to delete an item in your cart, "
        "or \"C\" to exit." << std::endl;
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
        else if(std::toupper(input) == 'E'){
            std::cin.ignore();
            if(cart.empty()){
                std::cout << "You have nothing in your cart.\n" << std::endl;
                continue;
            }

            string edit;
            PrintCart(cart);
            std::cout << "Enter the item you want to edit and the new quantity: "
            << std::endl;
            std::getline(std::cin, edit);
            std::istringstream istr(edit);
            istr >> item >> itemcount;
            cart[item].units = itemcount;
        }
        else if(std::toupper(input) == 'D'){
            std::cin.ignore();
            if(cart.empty()){
                std::cout << "You have nothing in your cart.\n" << std::endl;
                continue;
            }
            string remove;
            std::cout << "Which item do you want to remove? " << std::endl;
            std::getline(std::cin, remove);
            if(cart.count(remove) == 0){
                std::cout << "You don't have any of that item in your cart.\n"
                << std::endl;
                continue;
            }
            cart.erase(remove);
        }
        else break;
    }
    
//    double TotalCost = SelectionCost(inventory[item], itemcount);
//    std::cout << TotalCost << std::endl;

    return 0;
}
