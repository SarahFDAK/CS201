//
//  main.cpp
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
using std::endl;

int main(int argc, const char * argv[]) {
    vector<string> container;
    string item;
    
    cout << "Enter items or data into inventory. Enter \"stop\" to exit: " << endl;
    
    while(std::cin >> item) {
        if(item == "stop"){
            break;
        }
        FifoPush(container, item);
    }
    
    PrintContainer(container);
    FifoPop(container, item);
    
    PrintContainer(container);
    
    return 0;
}
