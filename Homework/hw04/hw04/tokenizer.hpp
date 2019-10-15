//
//  tokenizer.hpp
//  hw04
//
//  Created by Sarah Carter on 10/13/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#ifndef tokenizer_hpp
#define tokenizer_hpp

#include <stdio.h>
#include <iostream>


//Declare function prototypes
bool ReadLine(std::string & str);
unsigned StringToTokensWS(std::string & str, std::vector<std::string> & tokens);
void AnalyzeTokens(const std::vector<std::string> & tokens);
bool Finish(const std::string & str);

#endif /* tokenizer_hpp */
