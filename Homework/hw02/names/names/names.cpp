//
//  names.cpp
//  Sarah Carter
//  9/13/19
//

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

//Define prototypes
void InputNames(std::vector<std::string> & names);
bool DoesNameExist(const std::string & nameToFind, const std::vector<std::string> & names);


int main(int argc, const char * argv[]) {
    std::vector<std::string> names;
    InputNames(names);
    
    std::string nameToFind;
    std::cout << "Please enter the name you're looking for: ";
    std::cin >> nameToFind;
    DoesNameExist(nameToFind, names);
    if(DoesNameExist(nameToFind, names)==true){
        std::cout << "The name " << nameToFind << " is in the list." << std::endl;
    }
    else{
        std::cout << "The name " << nameToFind << " is not in the list.\n";
    }
    return 0;
}

void InputNames(std::vector<std::string> & names)
{
    for(int i = 0; i < 10; i++)
    {
        std::string name;
        std::cout << "Please enter a name: ";
        std::getline(std::cin, name);
        names.push_back(name);
    }
}

bool DoesNameExist(const std::string & nameToFind, const std::vector<std::string> & names)
{
    bool ans = false;
    if(std::find(names.begin(), names.end(), nameToFind) != names.end()){
        ans=true;
    }
    return ans;
}
