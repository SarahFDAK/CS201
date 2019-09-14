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
    while(user_num<=0) //Check user input to make sure it's a positive integer
    {
        std::cout << "Please enter a positive integer: \n"; //If incorrect, request new input
        std::cin.clear(); //Clear previous inputs
        std::cin.ignore(); //Ignore spaces and new lines
        std::cin >> user_num; //Save new input to check
    }
    for(int i = 0; i < user_num; i++) //Print the top of the diamond
    {
        for(int j = 0; j < (user_num - i - 1); j++) //Print spaces
        {
            std::cout << " ";
        }
        for(int k = 0; k < (2 * i +1); k++) //Print #s
        {
            std::cout << "#";
        }
        std::cout << std::endl;
    }
    
    for(int i = 0; i < user_num - 1; i++) //Print bottom of diamond
    {
        for(int j = 0; j < i + 1; j++) //Print spaces
        {
            std::cout << " ";
        }
        for(int k = 0; k < 2 * (user_num - 1 - i) - 1; k++) //Print #s
        {
            std::cout << "#";
        }
        std::cout << std::endl;
    }
    return 0;
}

