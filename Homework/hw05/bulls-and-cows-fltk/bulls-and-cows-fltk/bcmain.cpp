//
//  bcmain.cpp
//  bulls-and-cows-fltk
//
//  Created by Sarah Carter on 10/30/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Widget.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Multiline_Output.H>
#include <iostream>
#include <sstream>
#include <string>

#include "guesscheck.hpp"

std::string userGuess = "";
Fl_Multiline_Output *instruct = nullptr;
Fl_Input *guess = nullptr;

void guessInput_cb(Fl_Widget *g, void *data){
    Fl_Input *guess = (Fl_Input*)g;
    std::string gs = guess->value();
    std::istringstream istr(gs);
    istr >> userGuess;
}


int main(int argc, const char * argv[]) {
    Fl_Window *win = new Fl_Window(500, 300, "Bulls and Cows Game");
    win->begin();
    instruct = new Fl_Multiline_Output(75,10,400,75, "Instructions");
    instruct->value("Enter 4 numbers. The correct numbers in the correct location \nare counted as \"Bulls\" and correct numbers in the incorrect \nlocation are counted as \"Cows\". Get 4 bulls to win the game.");

    win->end();
    win->show();
    return Fl::run();
}
