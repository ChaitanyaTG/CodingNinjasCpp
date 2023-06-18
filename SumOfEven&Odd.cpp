//
//  SumOfEven&Odd.cpp
//  CodingNinjasCpp
//
//  Created by Chaitanya Gadkari on 21/05/23.
//


#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    
    int evenSum = 0, oddSum = 0;
    
    while (n > 0) {
        int last = n % 10;
        if(last % 2 == 0) {
            evenSum += last;
        }
        else {
            oddSum += last;
        }
        n = n/10;
    }
    cout<<evenSum<<" "<<oddSum<<endl;
    
    return 0;
}

/*
 #include <iostream>
 using namespace std;

 int main() {
     int n;
     cout<<"Enter a number "<<endl;
     cin>>n;
     
     int evenSum = 0, oddSum = 0;
     
     while (n > 0) {
         int last = n % 10;
         if(last % 2 == 0) {
             evenSum += last;
         }
         else {
             oddSum += last;
         }
         n = n/10;
     }
     cout<<evenSum<<" "<<oddSum<<endl;
     
     return 0;
 }

 */
