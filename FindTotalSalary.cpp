//
//  FindTotalSalary.cpp
//  CodingNinjasCpp
//
//  Created by Chaitanya Gadkari on 21/05/23.
//

#include <cmath>
#include <iostream>
using namespace std;

int main() {
    //take the input
    double basic;
    cout<<"Enter basic salary"<<endl;
    char grade;
    cout<<"Enter grade"<<endl;
    cin >> basic >> grade;
    
    int totalSalary = round(1.59*basic);
    // use grade
    switch(grade){
        case 'A':
            totalSalary += 1700;
            break;
        case 'B':
            totalSalary += 1500;
            break;
        default:
            totalSalary += 1300;
    }

    cout << totalSalary << endl;

    return 0;
}
