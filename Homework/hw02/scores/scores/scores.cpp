//
//  scores.cpp
//  Sarah Carter
//  9/15/19
//  This program asks for a name and that person's score, enters them into corresponding vectors, checks for duplicates, and exits when 'NoName 0' is entered. And it took me WAY TOO LONG.
//

#include <iostream>
#include <vector>

//Define prototypes
void PrintResults(std::vector<std::string> & names, std::vector<int> & scores);
bool QuitAsking(std::string & name, int & score);
bool DoesNameExist(std::string & name, std::vector<std::string> & names);


int main(int argc, const char * argv[]) {
    //Set the initial size of the vectors so the for statement will run
    std::vector<std::string> names(1);
    std::vector<int> scores(1);
    std::string name;
    int score;
    for(int i = 0; i < names.size(); i++){
        std::cout << "Enter a name and their score. Type 'NoName 0' to exit.\n";
        std::cin>>name>>score;
        //Check if user entered 'NoName 0'
        if(QuitAsking(name, score)==false){
            //Check if name is already in the vector
            if(DoesNameExist(name, names)==false){
                names.push_back(name);
                scores.push_back(score);
                std::cin.clear();
                std::cin.ignore();
            }
            else{
                std::cout << "You already entered that name.\n";
                std::cin.clear();
                std::cin.ignore();
                i--;
            }
        }
    }
    PrintResults(names, scores); //Print names and scores
    return 0;
}
//Print all entries in the vectors
void PrintResults(std::vector<std::string> & names, std::vector<int> & scores){
    for(int i = 0; i < names.size(); i++){
        std::cout << names[i] << " has a score of " << scores[i] << "." << std::endl;
    }
}
//Return true or false depending on user input of name and score
bool QuitAsking(std::string & name, int & score){
    bool quit = false;
    if(name == "NoName" && score == 0){
        quit = true;
    }
    return quit;
}
//Return true or false whether name is already entered in the vector
bool DoesNameExist (std::string & name, std::vector<std::string> & names)
{
    bool ans = false; //Sets the returned answer to a default of false.
    if(std::find(names.begin(), names.end(), name) != names.end()){
        ans=true; //If name is found, changes ans to true.
    }
    return ans;
}
