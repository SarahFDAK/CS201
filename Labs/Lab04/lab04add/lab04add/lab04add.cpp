//
//  lab04add.cpp
//  Sarah Carter
//  9/11/19
//  This prints prints the numbers 1 to 100, except it prints "Fizz" if the number is divisible by 3, "Buzz" if the number is divisible by 5, and "Fizz Buzz" if the number is divisible by both 3 and 5.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    for(int i = 1; i <= 100; i++)
    {
        int f = i%3;
        int b = i%5;
        if(b==0 && f==0)
        {
            std::cout << "fizz buzz\n";
        }
        else if (f==0)
        {
            std::cout << "fizz\n";
        }
        else if (b==0)
        {
            std::cout << "buzz\n";
        }
        else
        {
            std::cout << i << std::endl;
        }
    }
    return 0;
}
