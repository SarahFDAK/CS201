//
//  fofo.cpp
//  fifo-lifo
//
//  Created by Sarah Carter on 10/15/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include "fofo.hpp"
#include <iostream>
#include <vector>

using std::vector;
using std::string;
using std::cout;


void FifoPush(vector<string> & container, const string & item){
    container.insert(container.begin(), item);
}


void FifoLifoPop(vector<string> & container){
    container.pop_back();
}

void LifoPush(vector<string> & container, const string & item){
    container.push_back(item);
}


bool IsContainerEmpty(const vector<string> & container){
    if(container.size()==0){
        return true;
    }
    return false;
}


void PrintContainer(const vector<string> & container){
    cout << "The entered items are: " << std::endl;
    
    for(string item: container){
        cout << item << std::endl;
    }
}


