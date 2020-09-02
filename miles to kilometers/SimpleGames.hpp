//
//  SimpleGames.hpp
//  miles to kilometers
//
//  Created by David Smith on 9/2/20.
//  Copyright © 2020 David Smith. All rights reserved.
//

#include <stdio.h>
#include <vector>
using namespace std;

#ifndef SimpleGames_hpp
#define SimpleGames_hpp

class SimpleGames {
public:
    SimpleGames();
    vector <int> input;
    int score = 0;
    tuple <string, int, bool> enter_score(int high_score, int s);
    
};

// derived class number guessing 



#endif /* SimpleGames_hpp */


