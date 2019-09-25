//
//  collatz.cpp
//  Sarah Carter
//  9/24/19
//  This program asks the user for a positive integer, checks to make sure it is positive and non-zero, then prints the Collatz sequence that starts with that number. It exits when the user enters 0.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    int c = 0;
    //Request integer
    std::cout << "Please enter a postive integer (enter 0 to exit): \n";
    std::cin >> c;
    //Start loop if user enters non-zero number
    while(c != 0){
        std::cout << c << " ";
        //Check if number is positive. If not, request a new number.
        while(c < 0){
            std::cout << "Please enter a positive integer (enter 0 to exit): \n";
            std::cin.clear();
            std::cin >> c;
        }
        //Print Collatz sequence, stopping when 1 is reached
        while(c > 1){
            //Check if number is even or odd
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
