//hw05 main.cpp
//Sarah Carter
//10/31/19
//This program utilizes the fltk library to create a GUI for the previously designed truncstruct program.


#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Widget.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Button.H>
#include <iostream>
#include <sstream>
#include <string>

#include "truncstruct.hpp"

//Declare all global variables, initialize as nulls
StringInfo userStuff { "", 0 };

Fl_Input *entry = nullptr;
Fl_Input *sizeInput = nullptr;
Fl_Output *truncOutput = nullptr;
Fl_Button *truncate = nullptr;
Fl_Button *quit = nullptr;

//Callback for the button to quit the program
void quit_cb(Fl_Widget* obj, void*){
    exit(0);
}

//Callback that takes the user entry string and passes it to the string method of the StringInfo variable declared
void entryChanged(Fl_Widget *w, void *data)
{
    Fl_Input *entry = (Fl_Input*)w;
    std::string entr = entry->value();
    std::istringstream istr(entr);
    istr >> userStuff.str;

}

//Callback taht takes the user entry number and passes it to the len method of the StringInfo variable declared
void sizeInputChanged(Fl_Widget *w, void *data)
{
    Fl_Input *sizeInput = (Fl_Input*)w;
    std::string str = sizeInput->value();
    std::istringstream istr(str);
    istr >> userStuff.len;

}

//Callback that passes the completed StringInfo variable to the trunc() function, casts the string returned to a string, then passes that string to the output.
void truncBut_cb(Fl_Widget *t, void *data){
//    Fl_Button *truncate = (Fl_Button*)t;
    StringInfo *userStuff = (StringInfo*)data;
    std::string shrt = trunc(*userStuff).str;
    truncOutput->value(shrt.c_str());
}


int main(int argc, char **argv) {
    //Create the main program window
    Fl_Window *window = new Fl_Window(340,180);

    window->begin();
    
    //Create display parameters for variables declared
    entry = new Fl_Input(100, 10, 200, 30, "User Input");
    sizeInput = new Fl_Input(100, 50, 100, 30, "# of chars" );
    truncOutput = new Fl_Output(100, 90, 200, 30, "Output");
    truncate = new Fl_Button(85, 130, 75, 40, "Truncate");
    quit = new Fl_Button(185,130,75,40, "Quit");
    
    window->end();
    
    //Run all callbacks from relevant controls. When user inputs text into the two input fields, those fields use callbacks to pass the input to the StringInfo variable. The "Truncate" button uses the callback that passes the variable to the trunc() function and returns the output.
    entry->callback(entryChanged, nullptr);
    sizeInput->callback(sizeInputChanged, nullptr);
    truncate->callback(truncBut_cb, (void*)&userStuff);
    //Uses the quit callback to close the program window.
    quit->callback( (Fl_Callback*) quit_cb );

    window->show(argc, argv);
    return Fl::run();
}
