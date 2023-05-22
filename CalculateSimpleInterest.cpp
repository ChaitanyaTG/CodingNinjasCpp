//
//  CalculateSimpleInterest.cpp
//  CodingNinjasCpp
//
//  Created by Chaitanya Gadkari on 19/05/23.
//


#include<iostream>
using namespace std;

int main() {
    int principal, time, si;
    double rate;
    cin >> principal;
    cin >> rate;
    cin >> time;

    si = (principal * rate * time) / 100;
    cout << si;
    return 0;
}
