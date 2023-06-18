//
//  SetBits.cpp
//  CodingNinjasCpp
//
//  Created by Chaitanya Gadkari on 23/05/23.
//

#include <iostream>

using namespace std;
int countBits (int &n) {
    int sum = 0;
    while(n > 0) {
        sum = sum + (n&1);
        n /= 2;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    cout<<countBits(n);
    return 0;
}

