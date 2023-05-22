//
//  FindCharacterCase.cpp
//  CodingNinjasCpp
//
//  Created by Chaitanya Gadkari on 20/05/23.
//


#include<iostream>

using namespace std;

int main() {
    char ch;
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << "1";
    } else if (ch >= 'a' && ch <= 'z') {
        cout << "0";
    } else {
        cout << "-1";
    }
    return 0;
}

/*
 #include <iostream>
 using namespace std;

 int main() {
     char ch;
     cout<<"Enter a character";
     cin>>ch;
     
     if (ch >= 'A' && ch <= 'Z') {
         cout<<"1";
     }
     else if (ch >= 'a' && ch <= 'z') {
         cout<<"0";
     }
     else {
         cout<<"-1";
     }
     
     return 0;
 }

 */
