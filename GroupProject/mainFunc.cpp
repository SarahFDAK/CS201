/*
James davis and Sarah Carter
CS201
October 3rd
Group Project 1 - tempFunc.h
This program will define any functions specific for the functionality of main.cpp
*/

#include "proto.h"

std::string abrvt(const std::string &s)
{
    std::string abrvs;
    if (s == "millimeters")
		abrvs = "mm";
	if (s == "centimeters")
		abrvs = "cm";
	if (s == "meters")
		abrvs = "m";
	if (s == "kilometers")
		abrvs = "km";
    if (s == "inches")
        abrvs = "inches";
    return abrvs;
}

std::string setType(std::string s)
{
	if (s[0] == 'f' || s[0] == 'c' || s[0] == 'k')
		return "temp";


	if (s == "cm" || s == "mm" || s == "m" || s == "km")
		return "length";

	if (s == "inches" || s == "feet" || s == "miles")
		return "length";

	return "ERROR";
}
