//
//  SumOfEvenNumbersTillN.cpp
//  CodingNinjasCpp
//
//  Created by Chaitanya Gadkari on 21/05/23.
//

#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    
    int sum = 0;
    for (int i = 0; i<=n; i++) {
        if (i % 2 == 0) {
            sum += i;
        }
    }
    cout<<sum<<endl;
    return 0;
}
