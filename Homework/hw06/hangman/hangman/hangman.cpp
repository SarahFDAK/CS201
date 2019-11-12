//
//  hangman.cpp
//  hangman
//
//  Created by Sarah Carter on 11/10/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <map>
#include <string>
#include <random>
#include <vector>
#include <algorithm>
#include "hangman.hpp"

using std::string;
using std::uniform_int_distribution;
using std::mt19937;
using std::random_device;
using std::cout;
using std::endl;

string wordChoice(const int &key){
    std::map<int, string> word{
        {1, "maple"},
        {2, "general"},
        {3, "razor"},
        {4, "giraffe"},
        {5, "ottoman"},
        {6, "hexagon"},
        {7, "highway"},
        {8, "automobile"},
        {9, "computer"},
        {10, "initialize"}
    };
    return word.at(key);
}

int keyChoice(){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> d(1, 10);
    return d(gen);
}


void Game(const string &word){
    std::map<char, int> guesses;
    string sln(word.size(), '_');
    string correct;
    
    std::map<int, string> losing{
        {0, "Head"},
        {1, "Body"},
        {2, "Left Arm"},
        {3, "Right Arm"},
        {4, "Left Leg"},
        {5, "Right Leg"},
        {6, "Left Hand"},
        {7, "Right Hand"},
        {8, "Left Foot"},
        {9, "Right Foot"}
    };
    
    int wrong = 0;
    
    do{
        for(auto w:sln){
            cout << w;
        }
        cout << endl;
        cout << "Letters guessed: ";
        for(auto n:guesses){
            cout << n.first << " ";
        }
        cout << endl;
        cout << endl;
        
        cout << "Your guess: \n";
        char guess;
        std::cin >> guess;

        ++guesses[guess];
        
        int guessNo = std::count(word.begin(), word.end(), guess);
        auto iter = find(word.begin(), word.end(), guess);
        auto index = std::distance(word.begin(), iter);
        
        if(iter == word.end()){
            cout << guess << " is not in the word." << "   "
            << losing.at(wrong) << endl;
            wrong++;
        }
        else if(guessNo > 1){
            for(int i = guessNo; i >0; i--){
                sln[index] = guess;
                correct = sln;
                cout << correct << endl;
            }
        }
        else{
            sln[index] = guess;
            correct = sln;
            cout << correct << endl;
        }
        std::cin.ignore();
        
    }while(wrong < 10 && correct != word);

    if(wrong == 10){
        cout << "Sorry, you lose! The word was " << word << endl;
    }
    else
        cout << "Congratulations! The word is " << word << "!" << endl;
}



