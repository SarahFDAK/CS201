//
//  Lab 4: lab04.cpp
//  Sarah Carter
//  9/11/19
//  This lab prints the numbers 1 to 100, except those divisible by 3. Those numbers are
//  replaced with "fizz."
//

#include <iostream>

int main(int argc, const char * argv[]) {

    for(int i = 1; i <= 100; i++)
    {
        switch (i % 3)
        {
            case 0:
                std::cout << "fizz\n";
                break;
            default:
                std::cout << i << std::endl;
                break;
        }
    }
    return 0;
}
