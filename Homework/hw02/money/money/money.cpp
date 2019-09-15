//
//  main.cpp
//  money
//
//  Created by Sarah Carter on 9/15/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include <vector>

double CashCount(int pennies, int nickels, int dimes, int quarters, int dollars);

int main(int argc, const char * argv[]) {
    int pennies, nickels, dimes, quarters, dollars = 0;
    std::cout << "How many pennies, nickels, dimes, quarters, and dollars do you have? List them in this order, separated by a space: ";
    std::cin >> pennies >> nickels >> dimes >> quarters >> dollars;
    std::cout << "You have " << pennies << " pennies.\n"
    << "You have " << nickels << " nickels.\n"
    << "You have " << dimes << " dimes.\n"
    << "You have " << quarters << " quarters.\n"
    << "You have " << dollars << " dollars.\n"
    << "You have a total of " << CashCount(pennies, nickels, dimes, quarters, dollars) << " cents.\n";
    
    return 0;
}

double CashCount(int pennies, int nickels, int dimes, int quarters, int dollars){
    int centCount = 0;
    centCount += pennies;
    centCount += (nickels * 5);
    centCount += (dimes * 10);
    centCount += (quarters * 25);
    centCount += (dollars * 100);
    return centCount;
}

