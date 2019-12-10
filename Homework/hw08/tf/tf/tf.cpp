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
#include <algorithm>

using std::vector;
using std::ofstream;
using std::ifstream;
using std::cout;
using std::endl;
using std::string;
using std::istringstream;

const vector<string> stopWords {"the", "but", "and", "or", "for"};
const vector<char> stopChars {'.', ',', '\"'};

int main(int argc, const char * argv[]) {
    std::map<string, int> words;
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
                break;
            }
            else{
                cout << "Error reading file" << endl;
                break;
            }
        }
        istringstream read(line);
        while(read){
            string word;
            read >> word;
            std::transform(word.begin(), word.end(), word.begin(),
                           [](char c){return std::tolower(c);});
            for(char c:stopChars){
                while(word[0] == c)
                    word.erase(0,1);
                while(word[word.size()-1] == c)
                    word.pop_back();
                cout << word << endl;
            }
            for(string n:stopWords){
                if (n == word)
                    continue;
            }
            if(words.count(word) == 0)
                words[word] = 1;
            else
                words[word] += 1;
        }
    }
    std::pair<int, string> flip;
    for(auto i:words){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}
