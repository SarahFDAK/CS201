//
//  main.cpp
//  lab27
//
//  Created by Sarah Carter on 11/6/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include <random>

using std::uniform_int_distribution;
using std::random_device;
using std::mt19937;

int main(int argc, const char * argv[]) {
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> flip(0,1);
    int heads = 0;
    int tails = 0;
    
    for(int i = 0; i < 1000; i++){
        int headsTails = flip(gen);
        if(headsTails == 1){
            heads++;
        }
        else{
            tails++;
        }
    }
    std::cout << heads << " heads, " << tails << " tails."<< std::endl;
    return 0;
}
