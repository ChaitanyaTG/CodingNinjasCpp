//
//  FahrenheitToCelsius.cpp
//  CodingNinjasCpp
//
//  Created by Chaitanya Gadkari on 21/05/23.
//

#include <iostream>
using namespace std;

int main() {
    int start, end, step;
    cin>>start>>end>>step;
    
    for (int currentFarhenheitValue = start; currentFarhenheitValue <= end; currentFarhenheitValue += step) {
        int celsiusValue = (int) ((5.0/9) * (currentFarhenheitValue - 32));
        cout<<currentFarhenheitValue<<"\t"<<celsiusValue<<endl;
    }
    return 0;
}
