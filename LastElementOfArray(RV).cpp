//
//  LastElementOfArray(RV).cpp
//  CodingNinjasCpp
//
//  Created by Chaitanya Gadkari on 24/05/23.
//

#include <iostream>

using namespace std;
int main() {
    int n,i,x,a;
    cin>>n;

    int arr[n];

    for(i=0;i<n;i++)
     cin>>arr[i];
    cin>>x;

    for(i=0,a=0;i<n;i++)
    {
        if(arr[i] == x)
         a=i;

    }
    if(a==0)
     cout<<-1<<endl;
    else
     cout<<a<<endl;
    return 0;
}
