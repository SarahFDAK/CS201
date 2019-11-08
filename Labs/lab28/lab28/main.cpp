//
//  main.cpp
//  lab28
//
//  Created by Sarah Carter on 11/8/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <random>


int main(int argc, const char * argv[]) {
    std::ofstream myfile("firstTry.txt");
    if(!myfile){
        std::cout << "Error opening file" << std::endl;
    }
    std::vector<int> nums;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(1,100);
    for(int v = 1; v <=100; v++){
        nums.push_back(v);
    }
    std::shuffle(nums.begin(), nums.end(), gen);
    int p = 0;
    for(int i = 0; i < 10; i++){
        for(int j = 0; j < 10; j++){
            myfile << std::setw(4) << nums[p];
            p++;
        }
        myfile << std::endl;
    }
    
    return 0;
}
