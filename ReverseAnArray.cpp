//
//  ReverseAnArray.cpp
//  CodingNinjasCpp
//
//  Created by Chaitanya Gadkari on 24/05/23.
//


#include <iostream>
using namespace std;

int main() {
    int n, i;
    cin>>n;
    int arr[n];
    for(i = 0; i < n; i++) {
        cout<<arr[i]<<endl;
    }
    for(i = n - 1; i >= 0; i--) {
        cout<<arr[i]<<" ";
    }
    return 0;
}
