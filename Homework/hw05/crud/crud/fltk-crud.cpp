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
#include <string>
#include <map>

struct Model{
    std::string userInput;
};

struct View{
    Fl_Input* input = nullptr;
    Fl_Output* output = nullptr;
};

Fl_Window* WindowCreate(){
    Fl_Window* win = new Fl_Window(600, 400);
    Fl_Menu_Bar* menu = new Fl_Menu_Bar(10, 20, 560, 30);
    return win;
}

int main(int argc, const char * argv[]) {
    Fl_Window* window = WindowCreate();
    window->show();
    return Fl::run();
}
