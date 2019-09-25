//
//  main.cpp
//  collatz
//
//  Created by Sarah Carter on 9/24/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int a = 0;
    std::cout << "Please enter a postive integer: \n";
    std::cin >> a;
    while(a != 0){
        std::cout << a << " ";
        int c = a;
        while(c < 0){
            std::cout << "Please enter a positive integer: ";
            std::cin.clear();
            std::cin >> c;
        }
        while(c > 1){
            if(c%2 != 0){
                c = 3*c +1;
            }
            else{
                c = c/2;
            }
            std::cout << c << " ";
        }
        std::cout << std::endl;
        std::cout << "Please enter a positive integer: \n";
        std::cin.clear();
        std::cin >> a;
    }
    return 0;
}
