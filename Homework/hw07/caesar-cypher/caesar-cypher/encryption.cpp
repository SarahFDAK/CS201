//
//  error-checks.cpp
//  caesar-cypher
//
//  Created by Sarah Carter on 11/24/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include "encryption.hpp"
//Takes the original string and the integer entered and shifts the letters
std::string encrypt(const std::string &original, const int &shift){
    //Create a new string and set it equal to the original so length matches
    std::string shifted = original;
    //Loop through the characters of the original string
    for(size_t i = 0; i < original.size(); i++){
        //Check for capitals and lowercase that don't loop back to A or a
        if((original[i] >= 'A' && original[i] <= ('Z' - shift))
           || (original[i] >= 'a' && original[i] <= ('z' - shift))){
            //Change the character in the new string to the shifted char
            shifted[i] = original[i] + shift;
        }
        //Check if letter will need to loop back and adjust the shift
        else if (original[i] > ('Z' - shift) && original[i] < 'a'){
            shifted[i] = original[i] + shift - 26;
        }
        else if (original[i] > ('z' - shift) && original[i] < '{'){
            shifted[i] = original[i] + shift - 26;
        }
        //All other characters stay the same
        else
            shifted[i] = original[i];
    }
    return shifted;
}

//Check if the number entered is within the correct range.
bool isPositiveInt(const int &shift){
    if(shift > 26 || shift <= 0)
        return false;
    return true;
}
