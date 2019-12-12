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
#include <istream>

using std::vector;
using std::ofstream;
using std::ifstream;
using std::cout;
using std::endl;
using std::string;
using std::istringstream;

const vector<string> stopWords {"the", "but", "and", "or", "for", "i", "of", "to",
    "a", "in", "that", "it", "you", "was", "is", "are", "with", "as", "had", "at",
    "were", "have", "has", "he", "she", "him", "his", "which", "me", "this", "we",
    "hers", "what", "where", "when", "why", " ", "my", "us", "from", "there", "said",
    "so", "her", "your", "an", "then", "do", "if", "could", "would", "by", "into",
    "who", "will", "now"
    
};
vector<char> stopChars {};

void fillStopChars(){
    for(char c0 = 33; c0 < 'A'; c0++)
        stopChars.push_back(c0);

    for(char c = 91; c < 'a'; c++)
        stopChars.push_back(c);

    for(char c1 = 123; c1 < 126; c1++){
        stopChars.push_back(c1);
    }
}

string fixString(string &word, const vector<char> &letters){
    string wordSub;
    for(char c:word){
        auto itv = find(letters.begin(), letters.end(), c);
        if(itv != letters.end())
            wordSub.push_back(c);
    }
    word = wordSub;
    return word;
}

int main(int argc, const char * argv[]) {
    fillStopChars();
    vector<char> letters;
    for(char l = 'a'; l <= 'z'; l++)
        letters.push_back(l);
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
            fixString(word, letters);
//            for(char c:stopChars){
//                auto it = find(word.begin(), word.end(), c);
//                if(*it == c){
//                    word.erase(
//                           remove(word.begin(), word.end(), c));
//                    }
//                }
            auto it = find(stopWords.begin(), stopWords.end(), word);
            if(it != stopWords.end())
                    continue;
            if(words.count(word) == 0)
                words[word] = 1;
            else
                words[word] += 1;
        }
    }
    vector<std::pair<int, string>> flip;
    for(auto i:words){
        flip.push_back({i.second, i.first});
    }
    sort(flip.begin(), flip.end());
    reverse(flip.begin(), flip.end());
    
    for(int a = 0; a < 20; a++)
        cout << flip[a].first << " " << flip[a].second << endl;
    return 0;
}
