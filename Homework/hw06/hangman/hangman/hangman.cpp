//
//  hangman.cpp
//  hangman
//
//  Created by Sarah Carter on 11/10/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <map>
#include <random>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include "hangman.hpp"

using std::string;
using std::uniform_int_distribution;
using std::mt19937;
using std::random_device;

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

Fl_Window* CreateWindow(){
    Fl_Window* win = new Fl_Window(600, 450);
    win->begin();
    
    Fl_Box* header = new Fl_Box(10, 10, 580, 50, "Hangman");
    header->box(FL_UP_BOX);
    
    win->end();
    return win;
}
