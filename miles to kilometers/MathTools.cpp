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
using namespace std;

MathTools::MathTools() {
    vector <double> input;
};

void MathTools::maximum() {
    double max = input[0];
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] > input[i+1] && input[i] > max) {
            max = input[i];
        }
    }
    cout << "Test MathTools - Max is " << max << ".\n";
}

void MathTools::minimum() {
    double min = input[0];
    for (int i = 0; i < input.size(); ++i) {
        if (input[i] < input[i+1] && input[i] < min) {
            min = input[i];
        }
    }
    cout << "Test MathTools - Min is " << min << ".\n";
}

