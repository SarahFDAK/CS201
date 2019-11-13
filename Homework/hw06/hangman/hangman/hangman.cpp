//
//  hangman.cpp
//

#include <random>
#include <vector>
#include <algorithm>

#include "hangman.hpp"

using std::string;
using std::uniform_int_distribution;
using std::mt19937;
using std::random_device;
using std::cout;
using std::endl;



//Using the randomly selected key, choose which word will be used in the game
string SelectWord(std::map<int, string> &word, const int &key){
    return word.at(key);
}

//Create a PRN between 1 and the number of words in the source map.
int SelectRandomKey(std::map<int, string> &word){
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<int> d(1, int(word.size()));
    return d(gen);
}

//Create code to run the game
void Game(){
    //Create a map containing the hangman body parts
    std::map<int, string> losing{
        {0, "Head"},
        {1, "Body"},
        {2, "Left Arm"},
        {3, "Right Arm"},
        {4, "Left Leg"},
        {5, "Right Leg"},
        {6, "Left Hand"},
        {7, "Right Hand"},
        {8, "Left Foot"},
        {9, "Right Foot"}
    };
    //Create a map of words to use in the game
    std::map<int, string> word{
        {1, "maple"},
        {2, "general"},
        {3, "razor"},
        {4, "giraffe"},
        {5, "ottoman"},
        {6, "hexagon"},
        {7, "highway"},
        {8, "automobile"},
        {9, "computer"},
        {10, "initialize"}
    };
    
    //Create variable from functions above to get the word to guess
    string answer = SelectWord(word, SelectRandomKey(word));
    
    //Create a map to hold characters guessed and a "blank" string
    //of underscores to hold correct guesses
    std::map<char, int> guesses;
    string sln(answer.size(), '_');
    
    //Create a char variable to hold each guess and initialize an int
    //to hold the number of incorrect guesses
    char guess;
    int wrong = 0;
    
    //User input loop runs while the wrong guesses are less than
    //the number of body parts and the solution string does not match
    //the correct answer.
    do{
        //Print the solution string showing how many letters, and placement
        //of correct guesses
        cout << sln << "\n\n";
        
        cout << "Your guess: \n";
        std::cin >> guess;
        //After acquiring the guess, set an iterator to check if the char
        //has already been guessed
        std::map<char, int>::iterator it = guesses.find(guess);
        
        //If the new guess is not already in the guesses map, add it. Otherwise,
        //tell the user they've already guessed that and iterate the loop.
        if(it == guesses.end()){
            ++guesses[guess];
        }
        else{
            cout << "You already guessed " << guess << ".\n\n";
            continue;
        }
        
        //Print the list of letters already guessed.
        cout << "Letters guessed: ";
        for(auto letter:guesses){
            cout << letter.first << " ";
        }
        cout << "\n\n";
        
        //Count how many occurrences of the guess are in the answer
        int guessNum = std::count(answer.begin(), answer.end(), guess);
        
        //If the letter is not in the answer, tell the user and increment "wrong".
        //Otherwise, add the letter to the solution string where it needs to be.
        if(guessNum == 0){
            cout << guess << " is not in the word.   "
            << losing.at(wrong) << "\n" << endl;
            wrong++;
        }
        else{
            std::transform(answer.begin(), answer.end(),
                           sln.begin(), sln.begin(), [&](char i, char j){
                if(i == guess){
                    return guess;
                }
                return j;
            });
        }
        
        //clear out cin
        std::cin.ignore();
    }while(wrong < losing.size() && sln != answer);

    //After exiting the loop, check if they lost or won, give the correct response,
    //and show the correct answer.
    if(wrong == 10){
        cout << "Sorry, you lose! The word was " << answer << ".\n" << endl;
    }
    else{
        cout << "Congratulations! The word is " << answer << ".\n" << endl;
    }
}



