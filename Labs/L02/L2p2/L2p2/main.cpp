//
//  birthday.cpp
//  Sarah Carter
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    int mo, day, year;
    std::cout<< "Enter your birth month as an integer:"<<std::endl;
    std::cin>> mo;
    std::cout<< "Enter the day of the month of your birthday:\n";
    std::cin >> day;
    std::cout<< "Enter the year you were born:"<<std::endl;
    std::cin>> year;
    std::cout<< "Your birthday is "<< mo << "/"<<day<<"/"<<year<<std::endl;
    std::cout<< year <<"-"<< mo << "-" << day << std::endl;
    return 0;
}
