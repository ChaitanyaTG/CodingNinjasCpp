//
//  FindQuadrantOfTheCoordinatePoint.cpp
//  CodingNinjasCpp
//
//  Created by Chaitanya Gadkari on 21/05/23.
//


#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin>>x>>y;
    if (x > 0 && y > 0) {
        cout<<"1st Quadrant"<<endl;
    }
    else if (x < 0 && y > 0) {
        cout<<"2nd Quadrant"<<endl;
    }
    else if (x < 0 && y < 0 ) {
        cout<<"3rd Quadrant"<<endl;
    }
    else if (x > 0 && y < 0) {
        cout<<"4th Quadrant"<<endl;
    }
    else if (x == 0 && y == 0) {
        cout<<"Origin"<<endl;
    }
    else if (x == 0 && y != 0) {
        cout<<"Y Axis"<<endl;
    }
    else {
        cout<<"X axis"<<endl;
    }
    return 0;
}
