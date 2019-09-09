//
//  charbox.cpp
//  Sarah Carter
//  09/09/19
//  This lab requests a character from the user, then prints a 60x10 box made from
//      that character.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    int i = 1;
    int j = 1;
    char symbol;
    
    std::cout << "Please enter any single character: \n";
    std::cin >> symbol;
    
    while(i <= 10)
    {
        while(j <= 60)
        {
            std::cout << symbol;
            j++;
        }
        std::cout << std::endl;
        i++;
        j=1;
    }
    
    return 0;
}
