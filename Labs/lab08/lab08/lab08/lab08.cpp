//
//  main.cpp
//  lab08
//
//  Created by Sarah Carter on 9/20/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include "intio.hpp"

int doInput() {
    int temp = getInt();
    return temp;
}

int compute(int n){
    if(n<=0){
        return 0;
    }
    else{
        int count = 0; //declare counter variable
        for(int i = n-1; i > 0; i--){
            if(n%i ==0){
                count++;
            }
        }
        return count;
    }
}
