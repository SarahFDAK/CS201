                                          
                                          
#include <stdlib.h>
#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <cmath>
#include <vector>
 
using std::random_device;
using std::mt19937;
using std::uniform_int_distribution;
using std::normal_distribution;

int CalculateMean(int first, int last){
    std::vector<int> nums;
    for(int c = first; c <= last; c++){
        nums.push_back(c);
    }
    int ave = 0;
    for(auto i: nums){
        ave += i;
    }
    ave /= nums.size();
    return ave;
}

int RandomBetweenU(int first, int last){
    random_device ru;
    mt19937 genu(ru());
    uniform_int_distribution<int> disu(first,last);
    return disu(genu);
}

int RandomBetweenN(int first, int last){
    random_device rn;
    mt19937 genn(rn());
    normal_distribution<> disn(CalculateMean(first, last), 2);
    return disn(genn);
}

int RandomBetween(int first, int last){
    return rand();
}

void PrintDistribution(const std::map<int,int> &numbers){
    for (auto p : numbers) {
        std::cout << std::fixed << std::setprecision(1) << std::setw(2)
                  << p.first << ' ' << std::string(p.second/200, '*') << '\n';
    }
    std::cout << std::endl;
}

int main(){
    int first;
    int last;
    
    std::cout << "Enter a starting and an ending number: \n";
    std::cin >> first >> last;
    
    std::map<int, int> hist;
    std::map<int, int> histu;
    std::map<int, int> histn;
    for (int n = 0; n < 10000; ++n) {
        ++histn[std::round(RandomBetweenN(first, last))];
        ++histu[std::round(RandomBetweenU(first, last))];
        ++hist[std::round(RandomBetween(first, last))];
    }
    
    std::cout << "Uniform Distribution" << ":\n";
    PrintDistribution(histu);
    std::cout << "Normal Distribution" << ":\n";
    PrintDistribution(histn);
    std::cout << "Rand()" << ":\n";
    PrintDistribution(hist);

}
