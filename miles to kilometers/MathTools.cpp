//
//  MathTools.cpp
//  miles to kilometers
//
//  Created by David Smith on 8/31/20.
//  Copyright © 2020 David Smith. All rights reserved.
//

#include "MathTools.hpp"
#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

MathTools::MathTools() {
    vector <double> input;
    vector <int> disc;
};


void MathTools::maximum() {
    double max = input[0];
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] > input[i+1] && input[i] > max) {
            max = input[i];
        }
    }
    cout << "Max: " << max << "\n";
}

void MathTools::minimum() {
    double min = input[0];
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] < input[i+1] && input[i] < min) {
            min = input[i];
        }
    }
    cout << "Min: " << min << "\n";
}

void MathTools::sum() {
    double total = 0;
    for (int i = 0; i < input.size(); ++i) {
        total = total + input[i];
    }
    cout << "Sum: " << total << "\n";
}

// should only be used for first two values of input
void MathTools::difference() {
    double diff = input[0] - input[1];
    cout << "Difference: " << diff << "\n";
}

//should only be used for first two values of input
void MathTools::product() {
    double prod = input[0] * input[1];
    cout << "Product: " << prod << "\n";
}

//should only be used for first two values of input
void MathTools::ratio() {
    double rat = input[0] / input[1];
    cout << "Ratio: " << rat << "\n";
}

bool MathTools::parity(int x) {
    return (x % 2 == 0 ? true : false);
}


void MathTools::quadratic() {
    double a = input[0];
    double b = input[1];
    double c = input[2];    
    double x1 = (-b+sqrt((b*b)-4*a*c))/(2*a);
    double x2 = (-b-sqrt((b*b)-4*a*c))/(2*a);
    
    if (isnan(x1) || isnan(x2)) {
        cout << "x is an imaginary number\n";
    }
    else if (x1 != x2) {
        cout << "x = (" << x1 << ", " << x2 << ")\n";
    }
    else {
        cout << "x = " << x1 << "\n";
    }

}

