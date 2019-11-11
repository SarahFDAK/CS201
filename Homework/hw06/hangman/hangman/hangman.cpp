//
//  hangman.cpp
//  hangman
//
//  Created by Sarah Carter on 11/10/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <map>
#include <random>
#include <vector>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
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
    
    int wrong = 0;
    string guess;
    
    while(wrong < 10){
        for(auto w:sln){
            cout << w;
        }
        cout << endl;
        cout << "Guesses made: ";
        for(auto n:guesses){
            cout << n.first;
        }
        cout << endl;
        
        cout << "Your guess: \n";
        std::cin >> guess;
        size_t found = word.find(guess);
        ++guesses[guess];
        while(found != string::npos){
            sln[found] = guess;
        }
        if(found == string::npos){
            cout << guess << " is not in the word." << endl;
            wrong++;
        }
        std::cin.ignore();
    }
}
