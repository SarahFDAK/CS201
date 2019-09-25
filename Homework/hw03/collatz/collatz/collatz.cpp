//
//  collatz.cpp
//  Sarah Carter
//  9/24/19
//  This program asks the user for a positive integer, checks to make sure it is positive and non-zero, then prints the Collatz sequence that starts with that number. It exits when the user enters 0.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int c = 0;
    std::cout << "Please enter a postive integer (enter 0 to exit): \n";
    std::cin >> c;
    while(c != 0){
        std::cout << c << " ";
        while(c < 0){
            std::cout << "Please enter a positive integer (enter 0 to exit): \n";
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
        std::cout << "Please enter a positive integer (enter 0 to exit): \n";
        std::cin.clear();
        std::cin >> c;
    }
    return 0;
}
