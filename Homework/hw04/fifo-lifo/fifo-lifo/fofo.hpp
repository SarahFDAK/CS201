//
//  fofo.hpp
//  fifo-lifo
//
//  Created by Sarah Carter on 10/15/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#ifndef fofo_hpp
#define fofo_hpp

#include <stdio.h>
#include <iostream>

void FifoPush(std::vector<std::string> & container, const std::string & item);
void FifoPop(std::vector<std::string> & container, const std::string & itme);

void LifoPush(std::vector<std::string> & container, const std::string & item);
void LifoPop(std::vector<std::string> & container, const std::string & item);

bool IsContainerEmpty(const std::vector<std::string> & container);
void PrintContainer(const std::vector<std::string> & container);

bool TestFifo();
bool TestLifo();

#endif /* fofo_hpp */
