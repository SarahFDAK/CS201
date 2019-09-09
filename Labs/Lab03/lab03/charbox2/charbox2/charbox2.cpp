//
//  charbox2.cpp
//  Sarah Carter
//  09/09/19
//  This lab requests two characters from the user, then prints a 60x10 box made from
//      those characters.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    int i = 1;
    int j = 1;
    char symbol;
    char symbol2;
    
    std::cout << "Please enter any single character: \n";
    std::cin >> symbol;
    
    std::cout << "Please enter another, different, character: \n";
    std::cin >> symbol2;
    while(symbol == symbol2)
    {
        std::cout << "Please enter a different character from the first one, which is " <<
        symbol << std::endl;
        std::cin >> symbol2;
    }
    
    while(i <= 10)
    {
        while(j <= 30)
        {
            std::cout << symbol << symbol2;
            j++;
        }
        std::cout << std::endl;
        i++;
        j=1;
    }
    
    return 0;
}
