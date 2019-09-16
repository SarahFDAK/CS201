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
void stringHash(string input);

int main(int argc, const char * argv[]) {
    string input;
    cout << "What word do you want printed?" << endl;
    std::getline(std::cin, input);
    stringInfo(input);
    stringHash(input);
    return 0;
}

void stringInfo(string input){
    float length = input.size();
    cout << "Your string " << input << " is " << length << " characters long." << endl;
}

void stringHash(string input){
    for(float i = 0; i < input.size(); i++){
        cout << "#";
    }
}

void stringReverse(string input){
    float length = input.size();
    for(int i = 0; i < input.size(); i++){
        for(float j = input.size()-1; j >=0; j--){
            
        }
    }
}
