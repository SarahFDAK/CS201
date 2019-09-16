//
//  scores.cpp
//  Sarah Carter
//  9/15/19
//  This program asks for a name and that person's score, enters them into corresponding vectors, checks for duplicates, and exits when 'NoName 0' is entered. And it took me WAY TOO LONG.
//

#include <iostream>
#include <vector>

void PrintResults(std::vector<std::string> & names, std::vector<int> & scores);
bool QuitAsking(std::string & name, int & score);
std::vector<std::string> initNames(std::vector<std::string> & names);
std::vector<int> initScores(std::vector<int> & scores);
bool DoesNameExist(std::string & name, std::vector<std::string> & names);


int main(int argc, const char * argv[]) {
    std::vector<std::string> names;
    std::vector<int> scores;
    initNames(names);
    initScores(scores);
    std::string name;
    int score;
    for(int i = 0; i < names.size(); i++){
        std::cout << "Enter a name and their score. Type 'NoName 0' to exit.\n";
        std::cin>>name>>score;
        if(QuitAsking(name, score)==false){
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
    PrintResults(names, scores);
    return 0;
}

void PrintResults(std::vector<std::string> & names, std::vector<int> & scores){
    for(int i = 0; i < names.size(); i++){
        std::cout << names[i] << " has a score of " << scores[i] << "." << std::endl;
    }
}

bool QuitAsking(std::string & name, int & score){
    bool quit = false;
    if(name == "NoName" && score == 0){
        quit = true;
    }
    return quit;
}

std::vector<std::string> initNames(std::vector<std::string> & names){
    std::string name;
    std::cout << "Enter a name: ";
    std::cin >> name;
    names.push_back(name);
    return names;
}

std::vector<int> initScores(std::vector<int> & scores){
    int score;
    std::cout << "Enter their score: ";
    std::cin >> score;
    scores.push_back(score);
    return scores;
}

bool DoesNameExist (std::string & name, std::vector<std::string> & names)
{
    bool ans = false; //Sets the returned answer to a default of false.
    if(std::find(names.begin(), names.end(), name) != names.end()){
        ans=true; //If name is found, changes ans to true.
    }
    return ans;
}
