//
//  boxer.cpp
//  boxerPrint
//
//  Created by Sarah Carter on 9/23/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include "boxer.hpp"
#include <iostream>

void boxer(std::string userWord, int userInt){
    int length = userWord.size();
    for (int i = 0; i < userInt; i++){
        for (int j = 0; j < (2*userInt)+length +2; j++){
            std::cout << "*";
        }
        std::cout << std::endl;
    }
}
