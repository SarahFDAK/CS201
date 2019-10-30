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

StringInfo userStuff { "", 0 };

Fl_Input *entry = nullptr;
Fl_Input *sizeInput = nullptr;
Fl_Output *truncOutput = nullptr;
Fl_Button *truncate = nullptr;
Fl_Button *quit = nullptr;

void quit_cb(Fl_Widget* obj, void*){
    exit(0);
}

void truncBut_cb(Fl_Widget *trunc, void *data){
    
    
}


void entryChanged(Fl_Widget *w, void *data)
{
    Fl_Input *entry = (Fl_Input*)w;
    std::string str = entry->value();
    std::istringstream istr(str);
    istr >> userStuff.str;
}

void sizeInputChanged(Fl_Widget *w, void *data)
{
    Fl_Input *input = (Fl_Input*)w;
    std::string str = input->value();
    std::istringstream istr(str);
    istr >> userStuff.len;
}

int main(int argc, char **argv) {
    Fl_Window *window = new Fl_Window(340,180);

//    std::string input;
//    size_t len;
//    std::string output;
    window->begin();
    entry = new Fl_Input(100, 10, 200, 30, "User Input");
    sizeInput = new Fl_Input(100, 50, 100, 30, "# of chars" );
    sizeInput->callback(sizeInputChanged, nullptr);
    truncOutput = new Fl_Output(100, 90, 200, 30, "Output");
    truncate = new Fl_Button(85, 130, 75, 40, "Truncate");
    quit = new Fl_Button(185,130,75,40, "Quit");
    window->end();
    
    //truncate->callback( truncBut_cb(truncate, userStuff)) ;
    quit->callback( (Fl_Callback*) quit_cb );

    window->show(argc, argv);
    return Fl::run();
}
