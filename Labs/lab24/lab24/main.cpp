//
//  main.cpp
//  lab24
//
//  Created by Sarah Carter on 10/30/19.
//  Copyright © 2019 Sarah Carter. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::cout;
using std::endl;
using std::vector;
using std::sort;

void printVector(const vector<int> &test){
    for(int i : test){
        cout << i << " ";
    }
    cout << endl;
}

int main(int argc, const char * argv[]) {
    vector<int> test { 5, 23, 16, 2, 37, 900, 85, 45, 6, 12, 19, 304, 24};
    cout << "Original vector:\n";
    printVector(test);
    
    cout << "Sorted vector: \n";
    sort(test.begin(), test.end());
    printVector(test);
    
    cout << "Reversed vector: \n";
    reverse(test.begin(), test.end());
    printVector(test);

    cout << "Subset of vector: \n";
    for(auto it = test.begin()+2; it < test.end()-1; it++){
        cout << *it << " ";
    }
    
    return 0;
}
