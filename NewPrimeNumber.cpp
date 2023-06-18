//
//  NewPrimeNumber.cpp
//  CodingNinjasCpp
//
//  Created by Chaitanya Gadkari on 23/05/23.
//


#include <iostream>

using namespace std;
int totalPrime(int S, int E) {

    int count = 0;
    int flag;

    for (int i = S; i <= E; i++) {
        if (i == 1 || i == 0)
            continue;

        flag = 1;
        for (int j = 2; j <= i / 2; ++j) {

            
            if (i % j == 0) {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            count++;
    }
    return count;
}

int main() {
    int S, E;
    cin >> S >> E;
    cout << totalPrime(S, E);
    return 0;
}
