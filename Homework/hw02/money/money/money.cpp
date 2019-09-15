//
//  main.cpp
//  money
//
//  Created by Sarah Carter on 9/15/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <vector>

//Define prototypes
double CashCount(std::vector<int> & qtys);
void PrintQtys(std::vector<std::string> & coins, std::vector<std::string> & singles, std::vector<int> & qtys);
std::vector<std::string> makeVector(std::vector<std::string> & coins);
std::vector<std::string> makeSinglesVector(std::vector<std::string> & singles);
std::vector<int> makeQtyVector(std::vector<std::string> & coins, std::vector<int> & qtys);

int main(int argc, const char * argv[]) {
    std::vector<std::string> coins;
    makeVector(coins);
    std::vector<std::string> singles;
    makeSinglesVector(singles);
    std::vector<int> qtys;
    makeQtyVector(coins, qtys);

    //Call print function
    PrintQtys(coins, singles, qtys);
    
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
void PrintQtys(std::vector<std::string> & coins, std::vector<std::string> & singles, std::vector<int> & qtys){
    for(int i = 0; i < coins.size(); i++){
        if(qtys[i]==1){
            std::cout << "You have 1 " << singles[i] << std::endl;
        }
        else{
            std::cout << "You have " << qtys[i] << " " << coins[i] << "." << std::endl;
        }
    }
    std::cout << std::fixed;
    std::cout << std::setprecision(2);
    std::cout << "You have a total of $" << CashCount(qtys)/100 << "." << std::endl;
}

std::vector<std::string> makeVector(std::vector<std::string> & coins){

    coins.push_back("pennies");
    coins.push_back("nickels");
    coins.push_back("dimes");
    coins.push_back("quarters");
    coins.push_back("one-dollar coins");
    return coins;
}

std::vector<std::string> makeSinglesVector(std::vector<std::string> & singles){
    singles.push_back("penny");
    singles.push_back("nickel");
    singles.push_back("dime");
    singles.push_back("quarter");
    singles.push_back("one-dollar coin");
    return singles;
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
