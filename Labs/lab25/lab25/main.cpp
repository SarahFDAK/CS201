//
//  main.cpp
//  lab25
//
//  Created by Sarah Carter on 11/1/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

using std::vector;
using std::cout;
using std::endl;

int main(int argc, const char * argv[]) {
    vector<int> vecOne { 5, 2, 7, 12, 23};
    vector<int> vecTwo { 5, 2, 8, 12, 6};
    vector<int> vecThree { 5, 2, 7, 12, 23};
    
    auto it = mismatch(vecOne.begin(), vecOne.end(), vecTwo.begin());
    while(it.first != vecOne.end()){
        cout << *it.first << ", " << *it.second << endl;
        *it.second = *it.first;
        it = mismatch(vecOne.begin(), vecOne.end(), vecTwo.begin());
    }
    cout << "The vectors match." << endl;
    
    return 0;
}
