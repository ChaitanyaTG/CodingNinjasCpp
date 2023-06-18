//
//  FindLargestOfThreeNumbers.cpp
//  CodingNinjasCpp
//
//  Created by Chaitanya Gadkari on 21/05/23.
//

#include <stdio.h>
#include <iostream>
using namespace std;

int main() {
    int a, b , c;
    cin>>a>>b>>c;
    int largest;
    if(a >= b && a >= c) {
        largest = a;
    }
    else if(b >= a && a >= c) {
        largest = b;
    }
    else {
        largest = c;
    }
    cout<<largest<<endl;
    return 0;
}

/*
 #include <iostream>
 using namespace std;

 int main() {
     int a, b , c;
     cout<<"Enter a, b & c "<<endl;
     cin>>a>>b>>c;
     int largest;
     if(a >= b && a >= c) {
         largest = a;
     }
     else if(b >= a && a >= c) {
         largest = b;
     }
     else {
         largest = c;
     }
     cout<<largest<<endl;
     return 0;
 }

 */
