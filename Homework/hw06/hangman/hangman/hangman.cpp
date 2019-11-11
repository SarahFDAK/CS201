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
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
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

//Fl_Window* CreateWindow(){
//    Fl_Window* win = new Fl_Window(600, 450);
//    win->begin();
//    
//    Fl_Box* header = new Fl_Box(250, 10, 100, 50, "Hangman");
//    header->box(FL_UP_BOX);
//    header->labelsize(18);
//    
//    win->end();
//    return win;
//}

void Game(const string &word){
    std::map<string, int> guesses;
    std::vector<string> sln{word.size(), "_"};
    
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
    
    while(wrong < 10){
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
        
        ++guesses[std::to_string(guess)];
        
        auto iter = find_if(word.begin(), word.end(), [=](string word, char guess){
            return word.find(guess);
        });

        if(iter == word.end()){
            cout << guess << " is not in the word." << "   "
            << losing.at(wrong) << endl;
            wrong++;
        }
        else{
            break;
        }
        std::cin.ignore();
    }
}

//bool checkGuess(const auto &iter, const std::map<int, string> &losing){
//    return ;
//}

