//
//  tf.cpp
//  Sarah Carter
//  12/11/19
//  This program reads from a plain text copy of a book from the Gutenberg Project
//  then prints the top 20 words used in the book. A large list of conjunctions,
//  pronouns, prepositions, and linking verbs are excluded from the printout.
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

//Create vector of stop words. There could be so many more...
const vector<string> stopWords {"the", "but", "and", "or", "for", "i", "of", "to",
    "a", "in", "that", "it", "you", "was", "is", "are", "with", "as", "had", "at",
    "were", "have", "has", "he", "she", "him", "his", "which", "me", "this", "we",
    "hers", "what", "where", "when", "why", " ", "my", "us", "from", "there", "said",
    "so", "her", "your", "an", "then", "do", "if", "could", "would", "by", "into",
    "who", "will", "now",
    
};

//Built a function to return only lower-case characters in the words
//after they've been converted to lowercase, because the file included
//unicode quote characters that C++ did not like and would not remove from
//the words.
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
    //Created the vector of letter chars to pass to the fix string function
    vector<char> letters;
    for(char l = 'a'; l <= 'z'; l++)
        letters.push_back(l);
    //declare the map used to store words returned from lines
    std::map<string, int> words;
    
    //Open the plain text document
    ifstream fin("1661-0.txt");
    //Check for errors opening the file
    if(!fin){
        cout << "Error opening file." << endl;
        return 9;
    }
    
    //Declare the string to hold lines of text
    string line;
    
    //Start continuous loop to read the document
    while(true){
        //Get a line of text and check for errors
        std::getline(fin, line);
        if(!fin){
            //Check if it's end of file - if so, exit the while loop
            if(fin.eof()){
                break;
            }
            else{
                cout << "Error reading file" << endl;
                break;
            }
        }
        
        //Create istringstream to read individual words from the line
        istringstream read(line);
        
        //While it has things to read
        while(read){
            //Create a string to store each word.
            string word;
            read >> word;
            //Change word to all lowercase letters
            std::transform(word.begin(), word.end(), word.begin(),
                           [](char c){return std::tolower(c);});
            //Run fixString function to remove all but lowercase characters,
            //which is not perfect, but better than having all that unicode crap
            fixString(word, letters);
            
            //Skip any words that are in the stopWords vector
            auto it = find(stopWords.begin(), stopWords.end(), word);
            if(it != stopWords.end())
                    continue;
            
            //Check if the word is in the map. If so, increment its associated
            //value by 1, if not, add it to the map and give it a value of 1.
            if(words.count(word) == 0)
                words[word] = 1;
            else
                words[word] += 1;
        }
    }
    
    //Create a vector of pairs to hold reversed map data.
    vector<std::pair<int, string>> flip;
    //Fill flip with reversed map pairs
    for(auto i:words){
        flip.push_back({i.second, i.first});
    }
    
    //Sort flip, then reverse sort so it is in descending order.
    sort(flip.begin(), flip.end());
    reverse(flip.begin(), flip.end());
    //Print the top 20 words in the document. It seems to be returning
    //blanks or spaces, but I haven't figured out how to stop that one.
    //So there are over 12,000 of something with no apparent value.
    for(int a = 0; a < 20; a++)
        cout << flip[a].first << " " << flip[a].second << endl;
    return 0;
}
