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
    std::vector<std::string> names(1);
    std::vector<int> scores(1);
    std::string name;
    int score;
    for(int i = 0; i < names.size(); i++){
        int selection;
        std::cout << "Select one of the following: 1) Enter a name and score, 2) Print all entered names and scores, 3) Search for a name, 4) Search for a score: ";
        std::cin >> selection;
        switch(selection){
            case 1:{
                std::vector<std::string> names(1);
                std::vector<int> scores(1);
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
            }
            case 2:{
                PrintResults(names, scores);
            }
            case 3:{
                if(DoesNameExist(name, names)==false){
                    std::cout << name << " is not in the list.\n";
                }
                else{
                    std::cout << name << "'s score is " << scores[i] << "." << std::endl;
                }
            }
            case 4:{
                if(DoesScoreExist(score, scores)==false){
                    std::cout << score << " is not in the list.\n";
                }
                else{
                    std::cout << names << " had a score of " << score << ".\n";
                }
            }
        }
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
