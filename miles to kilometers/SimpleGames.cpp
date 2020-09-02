//
//  SimpleGames.cpp
//  miles to kilometers
//
//  Created by David Smith on 9/2/20.
//  Copyright © 2020 David Smith. All rights reserved.
//

#include "SimpleGames.hpp"
#include <vector>
#include <tuple>
#include <string>
#include <iostream>
using namespace std;


SimpleGames::SimpleGames() {
    std::vector <int> input;
    int score = 0;
};

tuple <string, int, bool> SimpleGames::enter_score(int high_score, int s) {
    string name;
    tuple <string, int, bool> entry = make_tuple(name, s, false);
    
    if (high_score < s) {
        cout << "Highest score yet! Enter your name: ";
        cin >> name;
        get<0>(entry) = name;
        get<2>(entry) = true;
        return entry;
    }
    else {
        cout << "Enter your name: ";
        cin >> name;
        get<0>(entry) = name;
        return entry;
    }
}


