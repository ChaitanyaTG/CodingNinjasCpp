//
//  FindPowerOfaNumber.cpp
//  CodingNinjasCpp
//
//  Created by Chaitanya Gadkari on 21/05/23.
//


#include <iostream>
using namespace std;

int main() {
    int x, n;
    cout<<"Enter x & n "<<endl;
    cin>>x>>n;
    int ans = 1;
    while (n > 0) {
        ans *= x;
        n--;
    }
    cout<<ans<<endl;
    
    return 0;
}
