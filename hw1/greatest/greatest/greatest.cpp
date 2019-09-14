//
//  HW01 additional: greatest.cpp
//  Sarah Carter
//  9/13/19
//  This program will request numbers from the user, then return the highest number entered that is greater than 0.

#include <iostream>

int entrynum();

int main(int argc, const char * argv[]) {
    int greater = 0;
    
    if(entrynum() <= 0)
    {
        std::cout << "You didn't enter a positive number.\n";
    }
    else
    {
        while(entrynum() > 0)
        {
            int holder = entrynum();
            if(holder > greater)
            {
                greater = holder;
            }
        }
    }
    std::cout << "The greatest number you entered was " << greater << "." << std::endl;
    return 0;
}

int entrynum()
    {
        int entry = 0;
        std::cout << "Enter a number: " <<std::endl;
        std::cin >> entry;
        return entry;
    }
