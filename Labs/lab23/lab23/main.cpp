//
//  main.cpp
//  lab23
//
//  Created by Sarah Carter on 10/28/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include <map>

using std::cout;
using std::map;
using std::string;

int main(int argc, const char * argv[]) {
    map<string, int> test{
        {"hello", 15},
        {"words",1},
        {"are", 45}
    };
    test["hard"] = 30;
    test["need"] = 1000;
    test["coffee"] = 5;
    test.erase("hello");
    
    cout << "Enter a key: \n";
    string input;
    std::cin >> input;
    if(test.count(input) != 0){
        cout << test.at(input) << std::endl;
    }
    else{
        cout << "That key does not exist." << std::endl;
    }
    
    for(auto &p: test){
        auto k = p.first;
        auto v = p.second;
        cout << k << " " << v << std::endl;
    }
    return 0;
}
