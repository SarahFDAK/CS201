//
//  scoresMenu.cpp
//  Sarah Carter
//  9/15/19
//  This program asks for the initial vector info, then prompts the user with a menu to choose various options.
//

#include <iostream>
#include <vector>

//Define prototypes
void PrintResults(std::vector<std::string> & names, std::vector<int> & scores);
bool QuitAsking(std::string & name, int & score);
bool DoesNameExist(std::string & name, std::vector<std::string> & names);
bool DoesScoreExist(int & score, std::vector<int> & scores);


int main(int argc, const char * argv[]) {
    std::vector<std::string> names(1);
    std::vector<int> scores(1);
    std::string name;
    int score;
    //Fill the vectors initially
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
    int selection;
    //Prompt user for selection
    std::cout << "Select one of the following: 1) Enter a name and score, 2) Print all entered names and scores, 3) Search for a name, 4) Search for a score: ";
    std::cin >> selection;
    switch(selection){
        //As for name and score input
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
            break;
        }
        //Print list of names and scores
        case 2:{
            PrintResults(names, scores);
            break;
        }
        //Ask for a name to search, check if it is in the list, if so return name's score
        case 3:{
            std::cout << "What name do you want to search?";
            std::cin >> name;
            if(DoesNameExist(name, names)==false){
                std::cout << name << " is not in the list.\n";
            }
            else{
                for(int i = 0; i < names.size(); i++){
                    if(names[i]==name){
                        std::cout << name << "'s score is " << scores[i] << "." << std::endl;
                    }
                }
            }
            break;
        }
        //Check if score is in list, if so, return all names that have that score
        case 4:{
            std::cout << "What score do you want to search?";
            std::cin >> score;
            if(DoesScoreExist(score, scores)==false){
                std::cout << score << " is not in the list.\n";
            }
            else{
                std::vector<std::string> nameList;
                for(int i = 0; i < scores.size(); i++){
                    if(scores[i]==score){
                        nameList.push_back(names[i]);
                    }
                }
                for(int k = 0; k < nameList.size(); k++){
                    std::cout << nameList[k] << std::endl;
                }
                std::cout<< " had a score of " << score << std::endl;
            }
            break;
        }
    }
    return 0;
}
//Print results entered in the vectors "names" and "scores"
void PrintResults(std::vector<std::string> & names, std::vector<int> & scores){
    for(int i = 0; i < names.size(); i++){
        std::cout << names[i] << " has a score of " << scores[i] << "." << std::endl;
    }
}
//Check if user entered "NoName 0"
bool QuitAsking(std::string & name, int & score){
    bool quit = false;
    if(name == "NoName" && score == 0){
        quit = true;
    }
    return quit;
}
//Check if a name is in the names vector
bool DoesNameExist (std::string & name, std::vector<std::string> & names)
{
    bool ans = false; //Sets the returned answer to a default of false.
    if(std::find(names.begin(), names.end(), name) != names.end()){
        ans=true; //If name is found, changes ans to true.
    }
    return ans;
}
//Check if a score is listed in the scores vector
bool DoesScoreExist (int & score, std::vector<int> & scores)
{
    bool ans = false; //Sets the returned answer to a default of false.
    if(std::find(scores.begin(), scores.end(), score) != scores.end()){
        ans=true; //If name is found, changes ans to true.
    }
    return ans;
}
