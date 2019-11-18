////
////  fltk-code.cpp
////  groupproject
////
////  Created by Sarah Carter on 11/15/19.
////  Copyright © 2019 Sarah Carter. All rights reserved.
////
//
//
//#include <FL/Fl.H>
//#include <FL/Fl_Window.H>
//#include <FL/Fl_Menu_Bar.H>
//#include <FL/Fl_Menu_Item.H>
//#include <FL/Fl_Input.H>
//#include <FL/Fl_Output.H>
//#include <FL/Fl_Button.H>
//
//#include <string>
//#include <iostream>
//#include <map>
//
//
////////////////////////////////////////////////////////////////////////
//// E X T E R N A L   L I B R A R I E S ///////////////////////////////
////////////////////////////////////////////////////////////////////////
//
//
//#pragma comment(lib, "fltk.lib")
//#pragma comment(lib, "comctl32.lib")
//
//
////////////////////////////////////////////////////////////////////////
//// S T R U C T S /////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
//
//
//struct Model
//{
//    std::string input;
//};
//
//
//struct View {
//    Fl_Input* input = nullptr;
//    Fl_Output* output = nullptr;
//};
//
//
////////////////////////////////////////////////////////////////////////
//// G L O B A L   V A R I A B L E S ///////////////////////////////////
////////////////////////////////////////////////////////////////////////
//
//
//Model model;
//View view;
//
//
////////////////////////////////////////////////////////////////////////
//// P R O T O T Y P E S ///////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
//
//
//void TransformData(const std::string& input, std::string& output);
//void OnInputChanged(Fl_Widget* w, void* userdata);
//void OnProcessClicked(Fl_Widget* w, void* userdata);
//void OnQuitClicked(Fl_Widget* w, void* userdata);
//Fl_Window* CreateWindow();
//
//
////////////////////////////////////////////////////////////////////////
//// C A L L B A C K S /////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
//
//
//void OnInputChanged(Fl_Widget* w, void* userdata) {
//    // check for NULL pointer
//    if (!view.input) return;
//
//    // The value() method of Fl_Input will return a C-style
//    // string which we can use with a std::string
//    model.input = view.input->value();
//}
//
//
//void OnProcessClicked(Fl_Widget* w, void* userdata) {
//    if (!view.output) return;
//
//    // This is where we can process the input in some way
//    std::string transformed;
//    TransformData(model.input, transformed);
//
//    // Note 1: We call c_str() method from std::string to get
//    // a C style Null terminated string
//    // Note 2: the value(string) method of Fl_Output is used
//    // to set the current value
//    view.output->value(transformed.c_str());
//}
//
//
//void OnQuitClicked(Fl_Widget* w, void* userdata) {
//    // We expect userdata to be the Window
//    if (!userdata) return;
//
//    // Cast the void* pointer back to a Fl_Window* pointer
//    Fl_Window* window = (Fl_Window*)userdata;
//
//    // The hide() method will close the window
//    window->hide();
//}
//
//
////////////////////////////////////////////////////////////////////////
//// F U N C T I O N S /////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////
//
//
//// TransformData(input, output) simply adds " transformed" to the input
//// string
//void TransformData(const std::string& input, std::string& output) {
//    output = input + " transformed!";
//}
//
//
//Fl_Window* CreateWindow() {
//    Fl_Window* window = new Fl_Window(640, 480);
//    Fl_Menu_Bar* mainmenu = new Fl_Menu_Bar(20, 10, 400, 100);
//    mainmenu->add("Convert From", 0, ConvertFrom_cb);
//
//    // We use these to ensure adequate spacing of widgets
//    const int x = 100;
//    int y = 160;
//    const int w = 100;
//    const int h = 25;
//    const int Spacing = 10;
//
//    view.input = new Fl_Input(x, y, 2 * w, h, "Input");
//    y += h + Spacing;
//    view.output = new Fl_Output(x, y, 2 * w, h, "Output");
//    y += h + Spacing;
//
//    Fl_Button* processBtn = new Fl_Button(x, y, w, h, "Process");
//    y += h + Spacing;
//    Fl_Button* quitBtn = new Fl_Button(x, y, w, h, "Quit");
//
//    // Register callbacks
//    view.input->callback(OnInputChanged, nullptr);
//    processBtn->callback(OnProcessClicked, nullptr);
//    quitBtn->callback(OnQuitClicked, (void*)window);
//
//    window->end();
//    return window;
//}
//
//
//int main(int argc, char** argv) {
//    Fl_Window* window = CreateWindow();
//    window->show(argc, argv);
//    return Fl::run();
//}
