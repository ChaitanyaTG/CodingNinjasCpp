//
//  SwapTwoNumbers.cpp
//  CodingNinjasCpp
//
//  Created by Chaitanya Gadkari on 19/05/23.
//


#include <utility>
using namespace std;

pair <int, int> swap(pair < int, int> swapValues) {
    int temp = swapValues.first;
    swapValues.first = swapValues.second;
    swapValues.second = temp;
    
    return swapValues;
}
