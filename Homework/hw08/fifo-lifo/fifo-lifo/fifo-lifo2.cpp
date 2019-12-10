//
//  main.cpp
//  fifo-lifo
//  Sarah Carter
//  12/8/19
//  This program takes user input and pushes it to vectors. It
//  demonstrates the principles of first in - first out and
//  last in - first out by showing the entered information and
//  then removing either the first element entered, or the last.
//

#include <iostream>
#include <vector>

#include "fofo2.hpp"

using std::vector;
using std::string;
using std::cout;
using std::endl;


int main(int argc, const char * argv[]) {
    vector<string> fifocontainer;
    vector<string> lifocontainer;
    string item;
    
    //Request user input
    cout << "Enter items or data into inventory. Enter \"stop\" to exit: \n"
    << endl;
    
    //Fill vectors with user input. End when they enter "stop".
    while(std::cin >> item) {
        if(item == "stop"){
            break;
        }
        FifoPush(fifocontainer, item);
        LifoPush(lifocontainer, item);
    }
    //If user immediately entered "stop", let them know nothing
    //was entered and end program.
    if(IsContainerEmpty(fifocontainer) ||
       IsContainerEmpty(lifocontainer)){
        cout << "You didn't enter anything." << endl;
        return 0;
    }
    
    //Print filled vectors
    cout << "FiFo container: \n";
    PrintContainer(fifocontainer);
    cout << "LiFo container: \n";
    PrintContainer(lifocontainer);
    
    //Remove first in and last in from fifo and lifo vectors,
    //respectively.
    FifoPop(fifocontainer);
    LifoPop(lifocontainer);
    
    //Print modified vectors.
    cout << "FiFo container, first in removed: \n";
    PrintContainer(fifocontainer);
    cout << "LiFo container, last in removed: \n";
    PrintContainer(lifocontainer);
    
    //Print whether the FiFo and LiFo functions work
    TestFifo();
    TestLifo();

    return 0;
}
