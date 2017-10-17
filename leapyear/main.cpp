// Program to determine if a date is a leap year or not.
//
// Author: Hal O'Connell
// September, 2017
//
// Works reading from a simple array containing year values
// and looping through each to determine if that year is a leap year
// Here is the usual algorithm:
// if (year is not divisible by 4) then (it is a common year)
// else if (year is not divisible by 100) then (it is a leap year)
// else if (year is not divisible by 400) then (it is a common year)
// else (it is a leap year)
// This program encapsulates this decision as a single line of code

#include <iostream>
using namespace std;
#define MAXROW 15

int main() {
    int mydates[MAXROW] = {1900, 2000, 2001, 1975, 1976, 1600, 1700, 1924, 2044, 2017, 2016, 2020, 1840, 804, 0};
    bool leap;

    cout << "Let's validate leap years!" << std::endl;
    // leap = false;
    for (int idx = 0; idx < MAXROW; idx++ ){
        if(( mydates[idx] % 400 == 0) || ( (mydates[idx] % 100 != 0) && (mydates[idx] % 4 == 0))) {
            leap = true;
        }
        else leap = false;
        if (leap) {
            cout << mydates[idx] << " is a Leap Year." << endl;
        }
        else {
            cout << mydates[idx] << " is NOT a Leap Year." << endl;
        }
    }



    return 0;
}