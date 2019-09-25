//
//  main.cpp
//  kelvin
//
//  Created by Sarah Carter on 9/25/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>

double ctok(double c){
    double k = c + 273.15;
    return k;
}

int main(){
    double c = 0;
    std::cout << "Enter a celcius temperature to convert to kelvin: \n";
    std::cin >> c;
    while(c < -273.15){
        std::cout << "Please enter a temperature that can exist (is greater than absolute zero): \n";
        std::cin.clear();
        std::cin >> c;
    }
    double k = ctok(c);
    std::cout << k << "\n";
    return 0;
}
//
//double ctok(double c){
//    int k = c + 273.15; //k need to be a double
//    return int; //Should return k, which is a double, not an int
//}
//int main(int argc, const char * argv[]) {
//    double c = 0;
//    cin >> d; //std library not declared, does not request a number, variable d is not declared or initialized.
//    double k = ctok("c"); //passes a string, not a double, to ctok
//    Cout << k << '/n'; //std library is not included, "Cout" should not be capitalized, end line command should be in double quotes and needs back, not forward, slash.
//    //no return statement - maybe not necessary?
//}

