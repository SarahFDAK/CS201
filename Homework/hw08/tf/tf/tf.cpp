//
//  main.cpp
//  tf
//
//  Created by Sarah Carter on 12/9/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <map>

using std::vector;
using std::ofstream;
using std::ifstream;
using std::cout;
using std::endl;
using std::string;
using std::istringstream;

const vector<string> stopWords {"the", "but", "and", "or", "for"};

int main(int argc, const char * argv[]) {
    ifstream fin("1661-0.txt");
    if(!fin){
        cout << "Error opening file." << endl;
        return 9;
    }
    string line;
    while(true){
        std::getline(fin, line);
        if(!fin){
            if(fin.eof()){
                cout << "Reached end of file." << endl;
                return 0;
            }
            else{
                cout << "Error reading file" << endl;
                break;
            }
        }
        
    }
    return 0;
}
