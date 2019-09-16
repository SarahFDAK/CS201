//
//  main.cpp
//  scores
//
//  Created by Sarah Carter on 9/15/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include <vector>

void PrintResults(std::vector<std::string> & names, std::vector<int> & scores);
bool QuitAsking(std::string & name, int & score);


int main(int argc, const char * argv[]) {
    std::vector<std::string> names;
    std::vector<int> scores;
    std::string name;
    int score;
    for(int i = 0; i < names.size(); i++){
        std::cout << "Enter a name and their score. Type 'NoName 0' to exit.\n";
        std::cin >> name >> score;
        if(QuitAsking(name, score)==false){
            if(i == 0 || names[i-1]!=name){
                names.push_back(name);
                scores.push_back(score);
            }
            else{
                std::cout << "You already entered that name.\n";
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

