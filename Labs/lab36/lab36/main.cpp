//
//  main.cpp
//  lab36
//
//  Created by Sarah Carter on 12/2/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>

const int ZZZ = 1;
const int SNOOZE = 2;
const int YAWN = 4;
const int STRETCH = 8;

void moar_sleep(int hours){
    std::cout << "How I feel when the alarm goes off: " << std::endl;
    if(hours & ZZZ)     std::cout << "dead\n";
    if(hours & SNOOZE)  std::cout << "like a zombie\n";
    if(hours & YAWN)    std::cout << "WHYYYYY\n";
    if(hours & STRETCH) std::cout << "FINALLY. But 15 more minutes...\n";
    std::cout << std::endl;
}

int main(int argc, const char * argv[]) {
    moar_sleep(ZZZ | YAWN);
    moar_sleep(SNOOZE | STRETCH);
    moar_sleep(YAWN | ZZZ);
    
    std::cout << "A double uses " << sizeof(double) << " bytes." << std::endl;
    std::cout << "A double uses " << sizeof(double)*8 << " bits." << std::endl;
    
    return 0;
}
