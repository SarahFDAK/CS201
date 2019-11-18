//
//  shopping-main.cpp
//  Sarah Carter
//  11/11/19
//  This program gives the user a list of item options for purchase, lets them
//  add items to their cart, view the cart, edit items in the cart, and delete
//  items. The cart view shows total cost per item, as well as total cost for the
//  cart.
//

#include <iostream>
#include <cctype>
#include <sstream>

#include "shopping.hpp"

using std::string;
using std::map;


int main(int argc, const char * argv[]) {
    //Create the map containing all the items.
    map<std::string, product> inventory{
        {"Butter", {3.00, 0, "pound"}},
        {"Bread", {3.29, 0, "loaf"}},
        {"Milk", {3.50, 0, "half gallon"}},
        {"Produce", {2.50, 0, "item"}},
        {"Meat", {1.57, 0, "pound"}}
    };
    
    //Initialize user input char, item, itemcount, and the map to hold the shopping cart.
    char input;
    string item;
    int itemcount;
    std::map<string,product> cart;
    
    //Keep the loop going until user enters the character to exit.
    while(true){
        std::cout << "Enter \"S\" to select purchases, \"V\" to view your cart, "
        "\E\" to edit an item, \"D\" to delete an item in your cart, "
        "or any other letter to exit." << std::endl;
        std::cin >> input;
        
        //Check user input char to select program option
        if(std::toupper(input) == 'S'){
            //Clear cin
            std::cin.ignore();
            //Print the product list
            PrintProducts(inventory);
            //Get a product choice from the user
            std::cout << "\nWhich product would you like? " << std::endl;
            std::getline(std::cin, item);
            if(!ItemIsProduct(item, inventory)){
                std::cout << item << " is not available.\n" << std::endl;
                continue;
            }
            for(auto p: inventory){
                //Make sure the entered item is one of the options.
                if(item == p.first){
                    //Create a new entry in the shopping cart and get quantity
                    cart[item] = inventory[item];
                    //If-else selection for proper pluralization of unittypes
                    if(item == "Bread"){
                        std::cout << "Enter how many loaves you want: " << std::endl;
                        }
                    else{
                        std::cout << "Enter how many " << (p.second).unittype << "s you want: " << std::endl;
                    }
                    //Update the cart with the desired unit quantity
                    std::cin >> itemcount;
                    (cart[item]).units = itemcount;
                    std::cin.ignore();
                }
            }
        }
        
        //Print the user's cart
        else if(std::toupper(input) == 'V'){
            if(EmptyCart(cart)){
                continue;
            }
            PrintCart(cart);
        }
        
        //User wants to edit their cart
        else if(std::toupper(input) == 'E'){
            std::cin.ignore();
            //Check if there's anything in the cart.
            if(EmptyCart(cart)){
                continue;
            }
            //Reprint the cart for reference
            string edit;
            PrintCart(cart);
            
            std::cout << "Enter the item you want to edit and the new quantity: "
            << std::endl;
            //Get which item user wants to change and to what amount.
            std::getline(std::cin, edit);
            std::istringstream istr(edit);
            istr >> item >> itemcount;
            //Check if that item is in the cart
            if(cart.count(item) == 0){
                std::cout << "You don't have any " << item << " in your cart.\n"
                << std::endl;
                continue;
            }
            //Update item quantity
            cart[item].units = itemcount;
            //Print the cart again to show the change.
            PrintCart(cart);
        }
        
        //User wants to delete an item
        else if(std::toupper(input) == 'D'){
            std::cin.ignore();
            //Check if the cart has anything in it
            if(EmptyCart(cart)){
                continue;
            }
            //Print cart contents for reference
            PrintCart(cart);
            string remove;
            //Ask which item they want to remove
            std::cout << "Which item do you want to remove? " << std::endl;
            std::getline(std::cin, remove);
            
            //Check if the item is in the cart
            if(cart.count(remove) == 0){
                std::cout << "You don't have any " << remove << " in your cart.\n"
                << std::endl;
                continue;
            }
            //Remove desired item
            cart.erase(remove);
        }
        
        //If they enter a character other than S, V, E, or D, exit the program.
        else break;
    }
    return 0;
}
