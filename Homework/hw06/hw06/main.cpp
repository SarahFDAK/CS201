                                          
                                          
                                          
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

int RandomBetweenU(int first, int last){
    random_device ru;
    mt19937 genu(ru());
    uniform_int_distribution<int> disu(first,last);
    return disu(genu);
}

int RandomBetweenN(int first, int last){
    random_device rn;
    mt19937 genn(rn());
    std::vector<int> nums;
    for(int c = first; c <= last; c++){
        nums.push_back(c);
    }
    int ave = 0;
    for(auto i: nums){
        ave += i;
    }
    ave /= nums.size();
    normal_distribution<> disn(ave, 2);
    return disn(genn);
}

int RandomBetween(int first, int last){
    int r = rand();
    return r;
}

void PrintDistribution(const std::map<int,int> &numbers){
    for (auto p : numbers) {
        std::cout << std::fixed << std::setprecision(1) << std::setw(2)
                  << p.first << ' ' << std::string(p.second/200, '*') << '\n';
    }
    std::cout << std::endl;
}

int main()
{
//    // Seed with a real random value, if available
//    std::random_device r;
//
//    // Choose a random mean between 1 and 6
//    std::default_random_engine e1(r());
//    std::uniform_int_distribution<int> uniform_dist(1, 6);
//    int mean = uniform_dist(e1);
//    std::cout << "Randomly-chosen mean: " << mean << '\n';
//
//    // Generate a normal distribution around that mean
//    std::seed_seq seed2{r(), r(), r(), r(), r(), r(), r(), r()};
//    std::mt19937 e2(seed2);
//    std::normal_distribution<> normal_dist(mean, 2);
//
    std::map<int, int> hist;
    std::map<int, int> histu;
    std::map<int, int> histn;
    for (int n = 0; n < 10000; ++n) {
        ++histn[std::round(RandomBetweenN(1, 6))];
        ++histu[std::round(RandomBetweenU(1, 6))];
        ++hist[std::round(RandomBetween(1, 6))];
    }
    
    std::cout << "Uniform Distribution" << ":\n";
    PrintDistribution(histu);
    std::cout << "Normal Distribution" << ":\n";
    PrintDistribution(histn);
    std::cout << "Rand()" << ":\n";
    PrintDistribution(hist);

}
