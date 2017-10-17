// Program to determine if a date is a leap year or not and then compare
// the difference between the standard algorithm and the optimized one
//
// Author: Hal O'Connell
// October, 2017
//
// Works looping through a boolean array using the index as the year values
// and setting the array element to true or false depending on the result
// It repeats this for the standard and optimized variants, capturing the loop times
// for comparison.
//
// Function 1: the usual algorithm:
// if (year is not divisible by 4) then (it is a common year)
// else if (year is not divisible by 100) then (it is a leap year)
// else if (year is not divisible by 400) then (it is a common year)
// else (it is a leap year)
// Function 2: encapsulates this decision as a single line of code
//
// Timings are wrapped around the function calls

#include <iostream>
#include <chrono>

using namespace std;
#define MAXYEAR 8000000
//#define DEBUG

void std_leap_year() {
    bool dates[MAXYEAR];
    bool leap;


    for (long testYear = 1; testYear < MAXYEAR; testYear++ ){
        leap = false;
        if( testYear % 4 == 0){
            leap = true;
            if ( testYear % 100 == 0) {
                leap = false;
            }
            if (testYear % 400 == 0) {
                leap = true;
            }

        }
        dates[testYear] = leap;

    }

#ifdef DEBUG    // debug prlong of array to confirm date calculations
    for (long testyear = 1; testyear < MAXYEAR; testyear++) {
        if (dates[testyear]) {
            cout << testyear << " is a Leap Year." << endl;
        }
        else {
            cout << testyear << " is NOT a Leap Year." << endl;
        }
    }

#endif
}

void opt_leap_year() {
    bool dates[MAXYEAR];

    for (long testYear = 0; testYear < MAXYEAR; testYear++ ){
        dates[testYear] = ((testYear % 4 == 0) && ((testYear % 100 != 0) || (testYear % 400 == 0))) ;

    }

#ifdef DEBUG    // debug prlong of array to confirm date calculations
    for (long testyear = 0; testyear < MAXYEAR; testyear++) {
        if (dates[testyear]) {
            cout << testyear << " is a Leap Year." << endl;
        }
        else {
            cout << testyear << " is NOT a Leap Year." << endl;
        }
    }

#endif

}


int main() {

    cout << "Let's validate leap years!" << std::endl << std::endl;

    auto t1 = std::chrono::high_resolution_clock::now();
    opt_leap_year();
    auto t2 = std::chrono::high_resolution_clock::now();

    cout << "Time for optimized algorithm was "
         << std::chrono::duration_cast<std::chrono::milliseconds>(t2-t1).count()
         << " milliseconds." << endl << endl;

    t1 = std::chrono::high_resolution_clock::now();
    std_leap_year();
    t2 = std::chrono::high_resolution_clock::now();

    cout << "Time for standard algorithm was "
         << std::chrono::duration_cast<std::chrono::milliseconds>(t2-t1).count()
         << " milliseconds." << endl << endl;


    return 0;
}