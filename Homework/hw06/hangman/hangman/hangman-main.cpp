//
//  main.cpp
//  hangman
//
//  Created by Sarah Carter on 11/10/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>

#include "hangman.hpp"

int main(int argc, const char * argv[]) {
    Fl_Window* window = CreateWindow();
    window->show();
    return Fl::run();
}
