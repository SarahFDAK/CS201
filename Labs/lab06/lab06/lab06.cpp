//
//  lab06.cpp
//  Sarah Carter
//  9/16/19
//  This lab asks the user for a string, then returns a printout of the string they entered and its length, a line of hash marks that is the same length as the string, and a line reversing the letters in the string.
//

#include <iostream>

using std::string;
using std::cout;
using std::endl;

void stringInfo(string input);
void stringHash(string input);
void stringReverse(string input);

int main(int argc, const char * argv[]) {
    string input;
    cout << "What word do you want printed?" << endl;
    std::getline(std::cin, input);
    stringInfo(input);
    stringHash(input);
    stringReverse(input);
    return 0;
}
//Counts the length of the user's string and prints the string and its length
void stringInfo(string input){
    float length = input.size();
    cout << "Your string " << input << " is " << length << " characters long." << endl;
}
//Prints hash marks instead of letters from the user's input.
void stringHash(string input){
    for(float i = 0; i < input.size(); i++){
        cout << "#";
    }
}
//Reverses the letters in the user's string
void stringReverse(string input){
    string dup = input;
    int i = 0;
    while(i < input.size()){
        for(float j = input.size()-1; j >=0; j--){
            input[i] = dup[j];
            i++;
        }
    }
    cout << "   " << input << endl;
}
