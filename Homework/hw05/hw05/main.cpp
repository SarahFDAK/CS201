#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Widget.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Button.H>
#include <iostream>
#include <string>

#include "truncstruct.hpp"

void quit_cb(Fl_Widget* obj, void*){
    exit(0);
}

void truncBut_cb(Fl_Widget* trunc, StringInfo userInfo){

}

int main(int argc, char **argv) {
    Fl_Window *window = new Fl_Window(340,180);

    std::string input;
    size_t len;
    std::string output;
    window->begin();
        Fl_Input *entry = new Fl_Input(100, 10, 200, 30, "User Input");
        input = entry->value();
        Fl_Input *size = new Fl_Input(100, 50, 100, 30, "# of chars" );
        len = size_t(size->value());
        Fl_Output *output = new Fl_Output(100, 90, 200, 30, "Output");
        Fl_Button *truncate = new Fl_Button(85, 130, 75, 40, "Truncate");
        Fl_Button *quit = new Fl_Button(185,130,75,40, "Quit");
    window->end();
    StringInfo userStuff {input, len };
    
    truncate->callback( (Fl_Callback*) truncBut_cb(truncate, userStuff);
    quit->callback( (Fl_Callback*) quit_cb );

    window->show(argc, argv);
    return Fl::run();
}
