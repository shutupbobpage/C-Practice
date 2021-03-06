//
//  main.cpp
//  miles to kilometers
//
//  Created by David Smith on 8/28/20.
//  Copyright © 2020 David Smith. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <limits>
#include <tuple>
#include "UnitConversion.hpp"
#include "MathTools.hpp"
#include "SimpleGames.hpp"

using namespace std;

int main(int argc, const char * argv[]) {
    
    // To keep track of high scores
    // Numbers Guessing Game = high_scores[0]
    vector <tuple <string, int>> high_scores;
    high_scores.push_back(make_tuple("wat", 50));
    
    
    while(1==1) {
        cout << "Hello! Select an option.\n\n"
                "1) Miles to kilometers\n"
                "2) Kilometers to miles\n"
                "3) Min, Max, Sum, Difference, Product, Ratio\n"
                "4) Numerical Sequence\n"
                "5) Even or Odd\n"
                "6) Vector Demo - City distance\n"
                "7) Numbers Guessing Game\n"
                "8) Sieve of Eratosthenes - Prime Numbers\n"
                "9) Quadratic Equation Solver\n"
                "10) Temperature Conversion\n"
                "11) Exit\n";
        int option;
        cin >> option;
        switch(option) {
            // Miles to kilometers
            case 1: {
                UnitConversion obj;
                cout << "How many miles?\n";
                cin >> obj.input;
                cout << obj.input << " miles is equal to " << obj.miles_to_km(obj.input) << " kilometers\n\n";
                break;
            }
            // Kilometers to miles
            case 2: {
                UnitConversion obj;
                cout << "How many kilometers?\n";
                cin >> obj.input;
                cout << obj.input << " kilometers is equal to " << obj.km_to_miles(obj.input) << " miles.\n\n";
                break;
            }
            // Min, Max, Sum, Difference, Product, Ratio
            case 3: {
                MathTools obj;
                double val1;
                double val2;
                cout << "Enter two numbers:";
                cin >> val1 >> val2;
                obj.input.push_back(val1);
                obj.input.push_back(val2);
                obj.minimum();
                obj.maximum();
                obj.sum();
                obj.difference();
                obj.product();
                obj.ratio();
                break;
            }
            // Numerical sequence
            case 4: {
                double val1;
                double val2;
                double val3;
                double min;
                double mid;
                double max;
                cout << "Enter three numbers:";
                cin >> val1 >> val2 >> val3;
                if (val1 > val2 && val1 > val3) {
                    max = val1;
                    if (val2 > val3) {
                        mid = val2;
                        min = val3;
                    }
                    else {
                        mid = val3;
                        min = val2;
                    }
                }
                else if (val2 > val1 && val2 > val3) {
                    max = val2;
                    if (val1 > val3) {
                        mid = val1;
                        min = val3;
                    }
                    else {
                        mid = val3;
                        min = val1;
                    }
                }
                else {
                    max = val3;
                    if (val1 > val2) {
                        mid = val1;
                        min = val2;
                    }
                    else {
                        mid = val2;
                        min = val1;
                    }
                }
                cout << "Min: " << min << "\n"
                        "Mid: " << mid << "\n"
                        "Max: " << max << "\n\n";
                break;
            }
            // Even or odd
            case 5: {
                MathTools obj;
                int val;
                cout << "Enter an integer:\n";
                cin >> val;
                if (obj.parity(val) == true) {
                    cout << "This number is even.\n";
                }
                else {
                    cout << "This number is odd.\n";
                }
                break;
            }
            // Vector demo
            case 6: {
                vector<double> city_dist;
                double total_dist = 0.0;
                double smallest_dist = 0.0;
                double largest_dist = 0.0;
                int x = 5; //determines number of city connections
                for (int i = 0; i < x; ++i) {
                    double entry;
                    cout << "Please enter Distance #" << i+1 << "\n";
                    cin >> entry;
                    city_dist.push_back(entry);
                }
                for (int i = 0; i < x; ++i) {
                    total_dist = total_dist + city_dist[i];
                    cout << "Distance between City " << i+1 << " and City " << i+2 << ": " << city_dist[i] << " miles.\n";
                    if (city_dist[i] < smallest_dist || i == 0) {
                        smallest_dist = city_dist[i];
                    }
                    if (city_dist[i] > largest_dist || i == 0) {
                        largest_dist = city_dist[i];
                    }
                }
                cout << "Total Distance: " << total_dist << " mile(s).\n" <<
                        "Smallest Distance: " << smallest_dist << " mile(s).\n"
                        "Largest Distance: " << largest_dist << " mile(s).\n"
                        "Average Distance: " << total_dist/x << " mile(s).\n\n";
                break;
            }
            // Number guessing - high_scores[0]
            case 7: {
                SimpleGames obj;
                int value = rand() % 100 + 1;
                int min = 0;
                int max = 100;
                int yes_or_no = 0;
                bool guessed = false;
                cout << "Think of an integer between 1-100\n\n";
                while (guessed == false) {
                    cout << "Is the number " << value << "? (1 = yes, 2 = no)\n";
                    cin >> yes_or_no;
                    switch(yes_or_no) {
                        case 1: {
                            guessed = true;
                            break;
                        }
                        case 2: {
                            cout << "Is the number greater than " << value << "? (1 = yes, 2 = no)\n";
                            cin >> yes_or_no;
                            switch(yes_or_no) {
                                case 1: {
                                    min = value;
                                    value += (max-min)/2;
                                    break;
                                }
                                case 2: {
                                    max = value;
                                    value -= (max-min)/2;
                                    break;
                                }
                                default: {
                                    cout << "Invalid response\n";
                                    break;
                                }
                            }
                            break;
                        }
                        default: {
                            cout << "Invalid response\n";
                        }
                    }
                }
                cout << "The number you were thinking of is " << value << "!\n\n";
                
                //high_scores.push_back(make_tuple("wat", 50));
                
                int hs_test_max = 100;
                cout << "High Score test\n\n";
                tuple <string, int, bool> temp = obj.enter_score(get<1>(high_scores[0]), hs_test_max);
                if (get<1>(temp) > get<1>(high_scores[0])) {
                    get<0>(high_scores[0]) = get<0>(temp);
                    get<1>(high_scores[0]) = get<1>(temp);
                }
                cout << get<0>(high_scores[0]) << ": " << get<1>(high_scores[0]) << endl;
                
                
                break;
            }
            // Sieve of Eratosthenes - Prime Numbers
            case 8: {
                int n;
                vector<int> sieve;
                cout << "Find all prime numbers from 2 to...(enter integer):\n";
                cin >> n;
                for (int i = 0; i < n-1; ++i) {
                    sieve.push_back(i+2);
                }
                cout << "Initial list:\n";
                for (int i = 0; i < n-1; ++i) {
                    cout << sieve[i] << "\n";
                }
                for (int p = 2; p < n; ++p){
                    for (int i = 0; i < n-1; ++i) {
                        int temp = sieve[i]*p;
                        sieve[temp-2] = 0;
                    }
                }
                cout << "List with only prime numbers: \n";
                for (int i = 0; i < n-1; ++i) {
                    if (sieve[i] != 0) {
                        cout << sieve[i] << "\n";
                    }
                }
                break;
            }
                
            // Quadratic formula
            case 9: {
                MathTools obj;
                double a;
                double b;
                double c;
                cout << "Quadratic equations take the form [ax^2 + bx + c = 0]\n"
                        "Enter a:\n";
                cin >> a;
                cout << "Enter b:\n";
                cin >> b;
                cout << "Enter c:\n";
                cin >> c;
                
                obj.input.push_back(a);
                obj.input.push_back(b);
                obj.input.push_back(c);
                
                obj.quadratic();
      
                break;
            }
            case 10: {
                // needs error catch; Kelvin should never be lower than 0
                double celsius;
                double kelvin;
                cout << "Enter a Celsius value to convert to Kelvin\n";
                cin >> celsius;
                kelvin = celsius + 273.15;
                cout << celsius << " C is equal to " << kelvin << " K.\n";
                break;
            }
            case 11: {
                return 0;
            }
            default: {
                cout << "Invalid response\n";
                break;
            }
        }
    }
}
