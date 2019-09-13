//
//  diamond.cpp
//  Sarah Carter
//  9/12/19
//  This program will prompt the user to input an integer, then create a diamond pattern with a corresponding number of lines.

#include <iostream>

int main(int argc, const char * argv[]) {
    
    int user_num = 0; //Initialize and assign a variable to receive user input
    std::cout << "Please enter an integer to build a diamond pattern: \n";
    std::cin >> user_num;
    
    for(int i = 0; i < user_num; i++)
    {
        for(int j = 0; j < (user_num - i - 1); j++)
        {
            std::cout << " ";
        }
        for(int k = 0; k < (2 * i +1); k++)
        {
            std::cout << "#";
        }
        std::cout << std::endl;
    }
    
    return 0;
}
