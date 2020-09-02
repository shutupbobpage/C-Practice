//
//  MathTools.hpp
//  miles to kilometers
//
//  Created by David Smith on 8/31/20.
//  Copyright © 2020 David Smith. All rights reserved.
//

#ifndef MathTools_hpp
#define MathTools_hpp

#include <stdio.h>
#include <vector>

class MathTools {
public:
    MathTools();
    std::vector <double> input;
    std::vector <int> disc;
    void maximum();
    void minimum();
    void sum();
    void difference();
    void product();
    void ratio();
    bool parity(int x);
    void quadratic();
};

#endif /* MathTools_hpp */
