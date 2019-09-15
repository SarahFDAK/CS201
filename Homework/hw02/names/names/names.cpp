//
//  names.cpp
//  Sarah Carter
//  9/13/19
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>


int main(int argc, const char * argv[]) {
    std::vector<std::string> names;
    for(int i = 0; i < 10; i++)
    {
        std::string name;
        std::cout << "Please enter a name: ";
        std::getline(std::cin, name);
        names.push_back(name);
    }
    return 0;
}


