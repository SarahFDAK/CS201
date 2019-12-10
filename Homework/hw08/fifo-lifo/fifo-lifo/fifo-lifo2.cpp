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

//bool TestFifo(){
//    std::string fifo;
//    for(char x = 'A'; x < 'E'; x++){
//        FifoPush(fifo, x);
//    }
//    size_t f = fifo.size() - 1;
//    if(fifo[f] == 'A'){
//        FifoLifoPop(fifo);
//        if(fifo[f] != 'A'){
//            std::cout << "FiFo works!" << std::endl;
//            return true;
//        }
//    }
//    std::cout << "FiFo womp womp..." << std::endl;
//    return false;
//}
//bool TestLifo(){
//    std::string lifo;
//    for(char x = 'A'; x < 'E'; x++){
//        LifoPush(lifo, x);
//    }
//    size_t l = lifo.size() - 1;
//    if(lifo[l] == 'D'){
//        FifoLifoPop(lifo);
//        if(lifo[l] != 'D'){
//            std::cout << "LiFo works!" << std::endl;
//            return true;
//        }
//    }
//    std::cout << "LiFo womp womp..." << std::endl;
//    return false;
//}

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
    
    std::string FirstIn = fifocontainer[fifocontainer.size()-1];
    std::string LastIn = lifocontainer[lifocontainer.size()-1];
    
    FifoLifoPop(fifocontainer);
    FifoLifoPop(lifocontainer);
    
    cout << "FiFo container, first in removed: \n";
    PrintContainer(fifocontainer);
    cout << "LiFo container, first in removed: \n";
    PrintContainer(lifocontainer);
    
//    TestFifo();
//    TestLifo();
//
    return 0;
}
