//
//  main.cpp
//  hw07
//
//  Created by Sarah Carter on 11/21/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

#include "Color3.hpp"
#include "Image3.hpp"

using std::cout;
using std::endl;
using std::ofstream;
using std::ifstream;

int main(int argc, const char * argv[]) {
    Color3 myColor(0,0,0);
    
    ofstream fout("testfile.txt");
    std::cin >> myColor;
    fout << myColor;
    cout << myColor << endl;
    
    Image3 myImage(4, 4);
    cout << myImage << endl;
    myImage.loadPPM("parrot.ppm");
    fout << myImage;
    fout.close();
    
    ifstream fin("textfile.txt");
    std::string line;
    std::getline(fin, line);
    if(!fin)
        return 0;
    cout << line << endl;

    fin.close();
    
    return 0;
}
