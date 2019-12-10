//
//  fofo.cpp
//  fifo-lifo
//
//  Created by Sarah Carter on 10/15/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include <vector>

#include "fofo.hpp"

using std::vector;
using std::string;
using std::cout;


void FifoPush(vector<string> & container, const string & item){
    container.push_back(item);
}


void FifoPop(vector<string> & container){
    container.erase(container.begin());
}

void LifoPush(vector<string> & container, const string & item){
    container.push_back(item);
}

void LifoPop(vector<string> & container){
    container.pop_back();
}


bool IsContainerEmpty(const vector<string> & container){
    if(container.size()==0){
        return true;
    }
    return false;
}


void PrintContainer(const vector<string> & container){
    for(string item: container){
        cout << item << std::endl;
    }
}

bool TestFifo(){
    vector<string> fifo;
    for(char x = 'A'; x < 'E'; x++){
        std::string inp = std::to_string(x);
        FifoPush(fifo, inp);
    }

    std::string FirstIn = fifo[0];
    if(fifo[0] == FirstIn){
        FifoPop(fifo);
        if(fifo[0] != FirstIn){
            std::cout << "FiFo works!" << std::endl;
            return true;
        }
    }
    std::cout << "FiFo womp womp..." << std::endl;
    return false;
}
bool TestLifo(){
    vector<string> lifo;
    for(char x = 'A'; x < 'E'; x++){
        std::string inpl = std::to_string(x);
        LifoPush(lifo, inpl);
    }
    
    std::string LastIn = lifo[lifo.size() - 1];
    
    if(lifo[lifo.size() - 1] == LastIn){
        LifoPop(lifo);
        if(lifo[lifo.size() - 1] != LastIn){
            std::cout << "LiFo works!" << std::endl;
            return true;
        }
    }
    std::cout << "LiFo womp womp..." << std::endl;
    return false;
}

