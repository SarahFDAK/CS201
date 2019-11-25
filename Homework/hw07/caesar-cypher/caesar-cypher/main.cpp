//
//  main.cpp
//  caesar-cypher
//  Sarah Carter
//  11/24/19.
//  This program asks the user for a string and a number to shift the characters
//  by and returns an encrypted version of the string using. Only letters are
//  shifted, and character case is maintained.
//

#include <sstream>

#include "encryption.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::string;

int main(int argc, const char * argv[]) {
    cout << "Caesar Cypher\n\n";
    //Start a loop while the user hasn't entered the termination character
    do{
        //Get a word or sentence from the user
        cout << "Enter a message to encrypt (enter a period \".\" to exit): "
        << endl;
        string original;
        getline(cin, original);
        //Exit the program if they type a period
        if(original == ".")
            return 0;
        //Get a number to shift the letters
        int shift = 0;
        do{
            cout << "Enter a number (26 or less, and positive) to shift the characters: "
            << endl;
            cin >> shift;
        //Make sure it is a positive number less than 26.
        //It loops to infinite and beyond if I enter a non-integer. I can't
        //figure out why.
        }while(!cin || !isPositiveInt(shift));
        
        cout << "Result: " << encrypt(original, shift) << "\n\n" << endl;
    }while(cin.get() != '.');
}
