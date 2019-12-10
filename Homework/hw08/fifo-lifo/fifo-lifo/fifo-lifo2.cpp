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
    vector<string> fifocontainer;
    vector<string> lifocontainer;
    string item;
    
    cout << "Enter items or data into inventory. Enter \"stop\" to exit: "
    << endl;
    
    while(std::cin >> item) {
        if(item == "stop"){
            break;
        }
        FifoPush(fifocontainer, item);
        LifoPush(lifocontainer, item);
    }
    if(IsContainerEmpty(fifocontainer) || IsContainerEmpty(lifocontainer)){
        cout << "You didn't enter anything." << endl;
        return 0;
    }
    
    cout << "FiFo container: \n";
    PrintContainer(fifocontainer);
    cout << "LiFo continer: \n";
    PrintContainer(lifocontainer);
    
    
    FifoPop(fifocontainer);
    LifoPop(lifocontainer);
    
    cout << "FiFo container, first in removed: \n";
    PrintContainer(fifocontainer);
    cout << "LiFo container, last in removed: \n";
    PrintContainer(lifocontainer);
    
    TestFifo();
    TestLifo();

    return 0;
}
