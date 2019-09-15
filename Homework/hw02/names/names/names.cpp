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
    std::vector<std::string> names; //Define the vector "names."
    InputNames(names); //Call the InputNames function
    
    std::string nameToFind; //Define string variable
    std::cout << "Please enter the name you're looking for: ";
    std::cin >> nameToFind;
    DoesNameExist(nameToFind, names); //Call function to see if name is in the vector
    //Tell the user if the name is or isn't in the list.
    if(DoesNameExist(nameToFind, names)==true){
        std::cout << "The name " << nameToFind << " is in the list." << std::endl;
    }
    else{
        std::cout << "The name " << nameToFind << " is not in the list.\n";
    }
    return 0;
}

//The InputNames function uses the names vector created in main() and requests names to be added in the elements.
void InputNames(std::vector<std::string> & names)
{
    for(int i = 0; i < 10; i++) //Runs statements 10 times
    {
        std::string name;
        std::cout << "Please enter a name: ";
        std::getline(std::cin, name);
        names.push_back(name); //Takes each entered name and pushes it to new element
    }
}
//Checks if a name entered by the user is in the created vector "names".
bool DoesNameExist(const std::string & nameToFind, const std::vector<std::string> & names)
{
    bool ans = false; //Sets the returned answer to a default of false.
    if(std::find(names.begin(), names.end(), nameToFind) != names.end()){
        ans=true; //If name is found, changes ans to true.
    }
    return ans;
}
