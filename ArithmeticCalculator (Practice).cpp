//
//  ArithmeticCalculator.cpp
//  CodingNinjasCpp
//
//  Created by Chaitanya Gadkari on 20/05/23.
//


#include <iostream>
using namespace std;

int main() {
    
    float num1, num2, result;
    char oper;
    
    cout<<"Enter First Number: "<<endl;
    cin>>num1;
    
    cout<<"Enter Second Number: "<<endl;
    cin>>num2;
    
    cout<<"Choose an operation to perform (+,-,*,/): "<<endl;
    cin>>oper;
    
    switch(oper) {
        case '+':
            result = num1 + num2;
            cout<<"The Result is: "<<num1<<" "<<oper<<" "<<num2<<" ="<<result<<endl;
            break;
            
        case '-':
            result = num1 - num2;
            cout<<"The Result is: "<<num1<<" "<<oper<<" "<<num2<<" ="<<result<<endl;
            break;
            
        case '*':
            result = num1 * num2;
            cout<<"The Result is: "<<num1<<" "<<oper<<" "<<num2<<" ="<<result<<endl;
            break;
            
        case '/':
            result = num1 + num2;
            cout<<"The Result is: "<<num1<<" "<<oper<<" "<<num2<<" = "<<result<<endl;
            break;
            
        default:
            cout<<"Invalid Operation "<<endl;
    }
    return 0;
}
