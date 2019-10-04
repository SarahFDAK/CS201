//
//  wordShrink.cpp
//  lab14
//
//  Created by Sarah Carter on 10/4/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include "wordShrink.hpp"
#include <iostream>

void wordShrink(std::string userWord){
    for(int i = 0; i < userWord.size(); i++){
        std::cout << userWord.substr(0, userWord.size()-i);
    }
}
