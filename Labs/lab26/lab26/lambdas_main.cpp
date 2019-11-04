/**
 * @file     lambdas.hpp
 * @author   Student Name
 * @date     Mar 21, 2019
 * John Quan
 *
 * Practice using lambda functions
 */

#include <cstdlib>
#include <iostream>
#include <algorithm>
#include <iterator>
#include <utility>
#include <vector>
#include <string>

#include "lambdas.hpp"

int main() {

	// TODO: REQUIRED
	//       Create a vector<pair<size_t, string>> to enumerate
	//       each string in the WIKIPEDIA_CPP string vector.
    std::vector<SizeStringPair> init;
    for(const auto &s: WIKIPEDIA_CPP){
        init.push_back(std::make_pair(s.size(), s));
    }


	// TODO: REQUIRED
	//       Use std::sort with a comparison lambda function that sorts
	//       the vector pairs with the first member in descending order.

    sort(init.begin(), init.end(),
         [](SizeStringPair a, SizeStringPair b){
        return a.first < b.first;
    });
    
    std::cout << printVectorPairs(init.begin(), init.end()) << "\n\n\n" << std::endl;
    
    sort(init.begin(), init.end(),
         [](SizeStringPair a, SizeStringPair b){
        return a.second > b.second;
    });
    
    std::cout << printVectorPairs(init.begin(), init.end()) << "\n\n\n" << std::endl;
    
//    auto i = init.begin();
//    while(i < init.end()){
//        auto addl2 = std::find_if(init.begin(), init.end(),
//            [](SizeStringPair a){
//                std::string str = a.second;
//                return str.size()>=15;
//            });
//        if (addl2 == init.end())
//            break;
//        std::cout << addl2->first << ", " << addl2->second << std::endl;
//        i++;
//    }
    

	// TODO: REQUIRED
	//       Use printVectorPairs() to print the vector



	// TODO: ADDITIONAL 1
	//       Use std::sort with a comparison lambda function that sorts
	//       the vector pairs with the second member in ascending order.



	// TODO: ADDITIONAL 1
	//       Use printVectorPairs() to print the vector



	// TODO: ADDITIONAL 2
	//       Use std::find_if with a comparison lambda function that prints
	//       the vector pairs where the pair's second.length() > 15.
	//       Print the vector as described in the lab.



	return 0;
}
