//
//  HW01 additional: greatest.cpp
//  Sarah Carter
//  9/13/19
//  This program will request numbers from the user, then return the highest number entered that is greater than 0.

#include <iostream>

//define my function prototype
int entrynum();

int main(int argc, const char * argv[]) {
    int greater = 0;
    
    if(entrynum() <= 0) //Check if the number entered is greater than 0.
    {
        //If not greater than 0, inform the user and exit the program.
        std::cout << "You didn't enter a positive number.\n";
    }
    else
    {
        while(entrynum() > 0) //If user entry is greater than zero, enter the while loop
        {
            int holder = entrynum(); //set input number to a local variable "holder"
            if(holder > greater) //Check if new number is greater than "greater" variable
            {
                greater = holder; //if so, replace "greater" with the new number. Otherwise, leave it as its previous value.
            }
        }
    }
    //Once the user has entered 0 or a negative number, tell the largest number entered.
    std::cout << "The greatest number you entered was " << greater << "." << std::endl;
    return 0;
}

//Function that asks for number inputs and assigns them to a variable "entry" that is returned to main.
int entrynum()
    {
        int entry = 0;
        std::cout << "Enter a positive number. Enter 0 or a negative number to exit the program." <<std::endl;
        std::cin >> entry;
        return entry;
    }
