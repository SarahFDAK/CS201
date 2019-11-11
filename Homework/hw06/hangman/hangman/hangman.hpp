//
//  hangman.hpp
//  hangman
//
//  Created by Sarah Carter on 11/10/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#ifndef hangman_hpp
#define hangman_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <FL/Fl.H>
#include <FL/Fl_Window.H>

std::string wordChoice(const int &key);
int keyChoice();
//Fl_Window* CreateWindow();
void Game(const std::string &word);

#endif /* hangman_hpp */
