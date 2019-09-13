//
//  main.cpp
//  lab05
//
//  Created by Sarah Carter on 9/13/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    int focus = 0;
    std::cout << "What do you want to do? 1) Count to a number 2) Solve a problem 3) Print a phrase" << std::endl;
    std::cin >> focus;
    switch(focus)
        {
            case 1:
            {
                int goal = 0;
                std::cout << "What number do you want to count to?" << std::endl;
                std::cin >> goal;
                for(int i = 0; i < goal; i++)
                {
                    std::cout << i + 1 << " ";
                }
                break;
            }
            case 2:
            {
                int problem =0;
                int divisor = 0;
                std::cout << "Enter a number and what number you want to divide it by: \n";
                std::cin >> problem >> divisor;
                double solution = problem/divisor;
                std::cout << problem << " divided by " << divisor << " == " << solution;
                break;
            }
            case 3:
                std::string statement;
                std::cout << "What do you want to say?" <<std::endl;
                std::cin >>statement;
                std::cout << "You said " << statement << "." << std::endl;
                break;
            }
    return 0;
}



