#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>
#include <FL/Fl_Input.H>
#include <FL/Fl_Button.H>

void quit_cb(Fl_Widget* obj, void*){
    exit(0);
}

int main(int argc, char **argv) {
    Fl_Window *window = new Fl_Window(340,180);
//    Fl_Box *box = new Fl_Box(20,40,300,100,"Hello, World!");
//    box->box(FL_UP_BOX);
//    box->labelfont(FL_BOLD+FL_ITALIC);
//    box->labelsize(36);
//    box->labeltype(FL_SHADOW_LABEL);
    Fl_Input *entry = new Fl_Input(100, 10, 200, 30, "User Input");
    entry->value();
    Fl_Input *size = new Fl_Input(100, 50, 100, 30, "# of chars" );
    size->value();
    Fl_Button *quit = new Fl_Button(100,100,75,40, "Quit");
    quit->callback( (Fl_Callback*) quit_cb );
    window->end();
    window->show(argc, argv);
    return Fl::run();
}
