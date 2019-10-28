#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Button.H>

int main(int argc, char **argv) {
    Fl_Window *window = new Fl_Window(340,180);
//    Fl_Box *box = new Fl_Box(20,40,300,100,"Hello, World!");
//    box->box(FL_UP_BOX);
//    box->labelfont(FL_BOLD+FL_ITALIC);
//    box->labelsize(36);
//    box->labeltype(FL_SHADOW_LABEL);
    Fl_Input *entry = new Fl_Input(100, 10, 200, 50, "User Input");
    entry->value();
    Fl_Button *quit = new Fl_Button(100,100,75,40, "Quit");
    window->end();
    window->show(argc, argv);
    return Fl::run();
}
