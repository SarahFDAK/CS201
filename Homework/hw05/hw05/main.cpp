#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Button.H>
#include <iostream>
#include <string>

#include "truncstruct.hpp"

void quit_cb(Fl_Widget* obj, void*){
    exit(0);
}

int main(int argc, char **argv) {
    Fl_Window *window = new Fl_Window(340,180);

    std::string input;
    size_t len;
    Fl_Input *entry = new Fl_Input(100, 10, 200, 30, "User Input");
    input = entry->value();
    Fl_Input *size = new Fl_Input(100, 50, 100, 30, "# of chars" );
    len = size_t(size->value());
    StringInfo userStuff { input, len };

    Fl_Button *quit = new Fl_Button(100,100,75,40, "Quit");
    quit->callback( (Fl_Callback*) quit_cb );
    window->end();
    window->show(argc, argv);
    return Fl::run();
}
