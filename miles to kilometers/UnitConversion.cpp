//
//  UnitConversion.cpp
//  miles to kilometers
//
//  Created by David Smith on 8/31/20.
//  Copyright © 2020 David Smith. All rights reserved.
//

#include "UnitConversion.hpp"

UnitConversion::UnitConversion() {
    double input = 0;
};

double UnitConversion::miles_to_km(double x) {
    x = x * 1.609;
    return x;
}
double UnitConversion::km_to_miles(double x) {
    x = x / 1.609;
    return x;
}
