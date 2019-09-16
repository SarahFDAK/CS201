//
//  main.cpp
//  lab06
//
//  Created by Sarah Carter on 9/16/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>

using std::string;
using std::cout;
using std::endl;

void stringInfo(string input);

int main(int argc, const char * argv[]) {
    string input;
    cout << "What word do you want printed?" << endl;
    std::getline(std::cin, input);
    stringInfo(input);
    return 0;
}

void stringInfo(string input){
    float length = input.size();
    cout << "Your string " << input << " is " << length << " characters long." << endl;
}
