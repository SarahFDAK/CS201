//
//  student.hpp
//  lab35
//
//  Created by Sarah Carter on 11/25/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#ifndef student_hpp
#define student_hpp

#include <stdio.h>
#include <string>

class Student {
public:
    Student(){};
    Student(int id) : _id(id){};
    Student(std::string name){
        _name = name;
    }
    Student(std::string name, int id) : _id(id), _name(name){};
    
    void printInfo() const;
    void setName(std::string name);
    void setID(int id);
private:
    int _id;
    std::string _name;
};

#endif /* student_hpp */
