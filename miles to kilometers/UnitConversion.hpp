//
//  UnitConversion.hpp
//  miles to kilometers
//
//  Created by David Smith on 8/31/20.
//  Copyright © 2020 David Smith. All rights reserved.
//

#ifndef UnitConversion_hpp
#define UnitConversion_hpp

class UnitConversion {
public:
    UnitConversion();
    double input;
    double miles_to_km(double x);
    double km_to_miles(double x);
};

#include <stdio.h>

#endif /* UnitConversion_hpp */
