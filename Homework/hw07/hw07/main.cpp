//
//  main.cpp
//  hw07
//
//  Created by Sarah Carter on 11/21/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "Color3.hpp"
#include "Image3.hpp"

using std::cout;
using std::endl;
using std::ofstream;
using std::ifstream;

int main(int argc, const char * argv[]) {
    std::string line;
    ifstream fin {"parrot.ppm"};
    if(!fin){
        return 0;
    }
    while(true){
        std::getline(fin, line);
        if(!fin){
            if(fin.eof())
                return true;
            else
                return false;
        }
        else
            cout << line << endl;
    }
    return 0;
}
