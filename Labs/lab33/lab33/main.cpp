//
//  main.cpp
//  lab33
//
//  Created by Sarah Carter on 11/20/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class Dog {
public:
    void setName(string name){
        _name = name;
    }
    string getName(){
        return _name;
    }
    void setBreed(string breed){
        _breed = breed;
    }
    string getBreed(){
        return _breed;
    }
    void printDog(){
        cout << getName() << ", " << getBreed() << endl;
    }
    void setAge(int age){
        _age = age;
    }
    int getAge(){
        return _age;
    }
    string toString(){
        return getName() + " is a " + getBreed() + " and is " + std::to_string(getAge());
    }
private:
    string _name;
    string _breed;
    int _age;
};

int main(int argc, const char * argv[]){
    Dog mine;
    mine.setName("Buffy");
    mine.setBreed("Rottweiler mix");
    
    mine.printDog();
    
    mine.setAge(1);
    
    cout << mine.toString() << endl;
    
    Dog sisters = mine;
    
    cout << sisters.toString() << endl;
    
    return 0;
}
