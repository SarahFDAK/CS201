//
//  HW01 Additional: mileskm.cpp
//  Sarah Carter
//  9/13/19
//  This program will ask the user to input a number of miles, then will convert them to kilometers.

#include <iostream>

int main(int argc, const char * argv[]) {
    
    //I decided to store the miles and kilometers as doubles instead of integers so the calculation can be more accurate.
    double miles = 0;
    double km = 0;
    
    std::cout << "Enter a number of miles you want converted to kilometers: \n";
    std::cin >> miles;
    if(miles <= 0)
    {
        std::cout << "That is not a realistic conversion.\n";
        return 0;
    }
    km = 1.609 * miles;
    std::cout << miles << " miles is equivalent to " << km << " kilometers." << std::endl;
    return 0;
}

