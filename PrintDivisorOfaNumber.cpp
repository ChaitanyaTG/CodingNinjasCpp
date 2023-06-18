//
//  PrintDivisorOfaNumber.cpp
//  CodingNinjasCpp
//
//  Created by Chaitanya Gadkari on 23/05/23.
//


#include <iostream>
using namespace std;

void printDivisors(int n) {
    for(int i = 1; i <= n; i++) {
        if (i % n == 0) {
            cout<<i<<" ";
        }
    }
}
int main() {
    int n;
    cin>>n;
    printDivisors(n);
    
    return 0;
}
