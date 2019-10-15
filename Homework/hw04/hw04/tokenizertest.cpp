//
//  tokenizertest.cpp
//  Sarah Carter
//  10/13/19
//  This program asks for lines of input from the user, then calls the functions Finish, StringToTokensWS, and AnalyzeTokens to build a vector from the input and report back all tokens entered and their types.
//

#include <iostream>
#include <vector>
#include "tokenizer.hpp"

int main(int argc, const char * argv[]) {
    std::string str;
    std::vector<std::string> tokens;
    
    std::cout << "Please enter a string - it can contain spaces and numbers. Type \"end\" or \"End\" or \"END\" to finish your input: \n";
    
    //As long as the user hasn't entered any of the termination strings, the input is passed to StringToTokens to be pushed into the tokens vector.
    while (Finish(str)) {
        std::getline(std::cin, str);
        StringToTokensWS(str, tokens);
    } 
    
    //Prints the number of elements in the vector once the user has completed entry.
    std::cout << tokens.size() << std::endl;
    
    //Lists all the elements and their types.
    AnalyzeTokens(tokens);
    return 0;
}

