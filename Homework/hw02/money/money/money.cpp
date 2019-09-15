//
//  main.cpp
//  money
//
//  Created by Sarah Carter on 9/15/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include <vector>

//Define prototypes
double CashCount(int pennies, int nickels, int dimes, int quarters, int dollars);
void PrintQtys(int pennies, int nickels, int dimes, int quarters, int dollars);
std::vector<std::string> makeVector(std::vector<std::string> & coins);
std::vector<int> makeQtyVector(std::vector<std::string> & coins, std::vector<int> & qtys);

int main(int argc, const char * argv[]) {
    std::vector<std::string> coins;
    makeVector(coins);

    std::vector<int> qtys;
    makeQtyVector(coins, qtys);

//     Call print function
    
    return 0;
}
//Add up the total cents represented by the coin quantities provided.
double CashCount(std::vector<int> & qtys){
    int centCount = 0;
    centCount += qtys[0]; //Add penny value
    centCount += (qtys[1] * 5); //Add nickel value
    centCount += (qtys[2] * 10); //Add dime value
    centCount += (qtys[3] * 25); //Add quarter value
    centCount += (qtys[4] * 100); //Add dollar value
    return centCount;
}
//Print the number of each coin, using singular nouns when appropriate.
void PrintQtys(int pennies, int nickels, int dimes, int quarters, int dollars){
    if(pennies == 1){
        std::cout << "You have 1 penny.\n";
    }
    else{
        std::cout << "You have " << pennies << " pennies.\n";
    }
    if(nickels == 1){
        std::cout << "You have 1 nickel.\n";
    }
    else{
        std::cout << "You have " << nickels << " nickels.\n";
    }
    if(dimes == 1){
        std::cout << "You have 1 dime.\n";
    }
    else{
        std::cout << "You have " << dimes << " dimes.\n";
    }
    if(quarters == 1){
        std::cout << "You have 1 quarter.\n";
    }
    else{
        std::cout << "You have " << quarters << " quarters.\n";
    }
    if(dollars == 1){
        std::cout << "You have 1 dollar";
    }
    else{
        std::cout << "You have " << dollars << " one-dollar coins.\n";
    }
    //Print the total dollar value of all the coins.
    std::cout << "You have a total of $" << CashCount(pennies, nickels, dimes, quarters, dollars)/100 << "." << std::endl;
}

std::vector<std::string> makeVector(std::vector<std::string> & coins){

    coins.push_back("pennies");
    coins.push_back("nickels");
    coins.push_back("dimes");
    coins.push_back("quarters");
    coins.push_back("one-dollar coins");
    return coins;
}

std::vector<int> makeQtyVector(std::vector<std::string> & coins, std::vector<int> & qtys){
    for(int i = 0; i < coins.size(); i++){
        std::cout << "How many " << coins[i] << " do you have?";
        int num;
        std::cin >> num;
        qtys.push_back(num);
        std::cin.ignore();
        }
    return qtys;
}
