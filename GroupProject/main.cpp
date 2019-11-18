/*
James davis and Sarah Carter
CS201
October 3rd
Group Project 1 - main.cpp
This program will utilise and implement functions created in the header files
*/

#include "proto.h"

int main()
{
	std::string unin;
	std::string unout;

	double tin;
	double tout;

	char check;
	std::string type1;
	std::string type2;

	//unit inputs
	std::cout << "What would your input UNITS be?\n";
	std::cin >> unin;
	std::cout << "What unit would you like to convert to?\n";
	std::cin >> unout;

	//checking
	std::cout << "You are converting " << unin << " to " << unout << ", right? (y/n)\n";
	std::cin >> check;
	if (check == 'n')
	{
		std::cout << "Okay then, restarting...\n\n\n\n\n\n\n";
		main();
	}

	//abbreviating if possible
	std::string cp = unin;
	std::string cp2 = unout;
    unin = abrvt(unin);
    unout = abrvt(unout);

	//establishing type set
	type1 = setType(unin);
	type2 = setType(unout);
    
	/*if (type1 != type2 || type1 == "ERROR")
	{
		std::cout << "ERROR: Unit types do not match, please try again\n\n\n\n\n\n\n";
		main();
	}*/

	//conversion time!
	std::cout << "How many " << cp << " are you converting into " << cp2 << "?\n";
	std::cin >> tin;

	if (unin[0] == 'f')
		tout = Fto(unout, tin);
	else if(unin[0] == 'c')
		tout = Cto(unout, tin);
	else if(unin[0] == 'k')
		tout = Kto(unout, tin);

	if (unin == "cm")
		tout = CMto(unout, tin);
	else if (unin == "mm")
		tout = MMto(unout, tin);
	else if (unin == "m")
		tout = Mto(unout, tin);
	else if (unin == "km")
		tout = KMto(unout, tin);


	if (unin == "inches")
		tout = inchto(unout, tin);
	if (unin == "feet")
		tout = footto(unout, tin);
	if (unin == "miles")
		tout = mileto(unout, tin);

	std::cout << tin << " " << unin << " is equal to " << tout << " " << unout << "\n\n\n";
}
