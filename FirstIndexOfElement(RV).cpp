//
//  FirstIndexOfElement.cpp
//  CodingNinjasCpp
//
//  Created by Chaitanya Gadkari on 24/05/23.
//


#include <iostream>
using namespace std;

void firstIndex(int arr[], int n, int x) {
    int first = -1;
    for (int i = 0; i < n; i++) {
        if (x == arr[i]) {
            first = i;
            break;
        }
    }
    cout << first;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int x;
    cin >> x;
    firstIndex(arr, n, x);
    return 0;
}
