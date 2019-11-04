//
//  main.cpp
//  crud
//
//  Created by Sarah Carter on 10/31/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Output.H>
#include <FL/Fl_Button.H>
#include <FL/Fl_Menu_Bar.H>
#include <FL/Fl_Menu_Item.H>
#include <string>
#include <map>

struct Model{
    std::string userInput;
};

struct View{
    Fl_Input* input = nullptr;
    Fl_Output* output = nullptr;
};

void Quit_CB(Fl_Widget* q, void* data){
    exit(0);
}

Fl_Window* WindowCreate(){
    Fl_Window* win = new Fl_Window(600, 400);
    Fl_Button* quit = new Fl_Button(500, 20, 60, 30, "Quit");
    quit->color(FL_RED);
    quit->callback(Quit_CB);
    return win;
}

int main(int argc, const char * argv[]) {
    Fl_Window* window = WindowCreate();
    window->show();
    return Fl::run();
}
