//
//  bcmain.cpp
//  bulls-and-cows-fltk
//  Sarah Carter
//  10/30/19.
//  This program uses the fltk library to create a GUI for the previously designed bulls-and-cows program, taking user guess input and reporting the results to a separate window.
//

#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/fl_ask.H>
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

//Declare global variables; initialize game answer
std::string userGuess = "";
std::string answer = "2587";
Fl_Multiline_Output *instruct = nullptr;
Fl_Input *guess = nullptr;
Fl_Output *result = nullptr;
Fl_Button *tryout = nullptr;
Fl_Button *quit = nullptr;


//Callback that takes user's guess input and passes it to the userGuess string created above.
void guessInput_cb(Fl_Widget *g, void *data){
    Fl_Input *guess = (Fl_Input*)g;
    std::string gs = guess->value();
    std::istringstream istr(gs);
    istr >> userGuess;
}

//Callback that checks if the guess is of the proper length and format of the guess; once it is correct, CountBulls and CountCows functions are called and cast to integers, then a string is concatenated reporting the result. This is passed to the output.
void tryoutBut(Fl_Widget *t, void *data){
    std::string *userGuess = (std::string*)data;
    if(!CheckGuessType(*userGuess) | !CheckGuessLength(*userGuess)){
        result->value("Please enter 4 numbers to guess.");
    }
    int bulls = CountBulls(*userGuess, answer);
    int cows = CountCows(*userGuess, answer)-CountBulls(*userGuess, answer);
    std::string resultText = std::to_string(bulls) + " Bulls and " + std::to_string(cows) + " Cows.";
    result->value(resultText.c_str());
}

//Callback that exits the program
void exitProgram(Fl_Widget *q, void *data){
    switch (fl_choice("Are you sure you want to quit?", fl_yes, fl_no, 0)){
        case 0: exit(0);
    }
}

int main(int argc, const char * argv[]) {
    Fl_Window *win = new Fl_Window(500, 300, "Bulls and Cows Game");
    win->begin();
    
    instruct = new Fl_Multiline_Output(85,10,400,75, "Instructions: ");
    instruct->value("Enter 4 numbers. The correct numbers in the correct location \nare counted as \"Bulls\" and correct numbers in the incorrect \nlocation are counted as \"Cows\". Get 4 bulls to win the game.");
    guess = new Fl_Input(85, 90, 50, 30, "Your guess: ");
    guess->callback(guessInput_cb);
    
    tryout = new Fl_Button(140, 200, 75, 40, "Guess");
    tryout->color(FL_CYAN);
    tryout->callback(tryoutBut, (void*)&userGuess);
    
    result = new Fl_Output(85, 125, 300, 30, "Result: ");
    
    quit = new Fl_Button(260, 200, 75, 40, "Exit");
    quit->color(FL_RED);
    quit->callback( exitProgram );

    win->end();
    win->show();
    return Fl::run();
}
