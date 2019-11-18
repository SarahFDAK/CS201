/*
James davis and Sarah Carter
CS201
October 3rd
Group Project 1 - proto.h
This program will serve as a central hub for all of the functions we create and use
*/

#ifndef proto_H
#define proto_H

#pragma comment(lib, "fltk.lib")

#include <string>
#include <iostream>

//main
std::string abrvt(const std::string& s);
std::string setType(std::string s);

//temperature
double Cto(std::string s, double x);
double Kto(std::string s, double x);
double Fto(std::string s, double x);

//length
double Mto(std::string s, double x);
double CMto(std::string s, double x);
double MMto(std::string s, double x);
double KMto(std::string s, double x);
double inchto(std::string s, double x);
double footto(std::string s, double x);
double mileto(std::string s, double x);

/*
IDEAS:

Add FLTK interface, can FLTK be included within project, so it doesn't need to be added on new computers?
Time conversions
Make conversions easier/safer, e.g: spelling error protection
*/

#endif
