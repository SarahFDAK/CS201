//
//  fofo.cpp
//  fifo-lifo
//
//  Created by Sarah Carter on 10/15/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include <vector>

#include "fofo2.hpp"

using std::vector;
using std::string;
using std::cout;

//Define FiFo functions, though the push function seems redundant.
//FiFo and LiFo essentially create the same vectors, they just remove
//different elements from them.
void FifoPush(vector<string> & container, const string & item){
    container.push_back(item);
}
//Removes the element from the beginning of the vector.
void FifoPop(vector<string> & container){
    container.erase(container.begin());
}

//Define LiFo functions
void LifoPush(vector<string> & container, const string & item){
    container.push_back(item);
}
void LifoPop(vector<string> & container){
    container.pop_back();
}

//Check if the container is empty.
bool IsContainerEmpty(const vector<string> & container){
    if(container.size()==0){
        return true;
    }
    return false;
}

//Print the vector
void PrintContainer(const vector<string> & container){
    for(string item: container){
        cout << item << std::endl;
    }
    cout << std::endl;
}

//Test if the FiFo function works
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

//Test if the LiFo function works
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

