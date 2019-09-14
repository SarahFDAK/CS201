//
//  HW01 additional: greatest.cpp
//  Sarah Carter
//  9/13/19
//  This program will request numbers from the user, then return the highest number entered that is greater than 0.

#include <iostream>

int entrynum();

int main(int argc, const char * argv[]) {
    int greater = 0;
    while(entrynum() > 0)
    {
        if(entrynum() > greater)
        {
            greater = entrynum();
        }
        entrynum();
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
