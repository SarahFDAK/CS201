//
//  student.cpp
//  lab35
//
//  Created by Sarah Carter on 11/25/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>

#include "student.hpp"

void Student::printInfo() const{
    std::cout << "Student name: " << _name << ", Student ID: "
    << _id << std::endl;
}

void Student::setName(std::string name){
    _name = name;
}

void Student::setID(int id){
    _id = id;
}
