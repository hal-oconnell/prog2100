// LifeConsole.cpp : Defines the entry point for the console application.
//
//  Created by Hal O'Connell on 2012-10-04.
//  Copyright (c) 2012 Hal O'Connell. All rights reserved.
//
#include <iostream>
// #include <fstream>
using namespace std;

#include "utility.h"
#include "life.h"

int main(int argc, const char * argv[])
{

    // insert code here...
    Life configuration;
    configuration.instructions();
    configuration.initialize();
    configuration.print();
    cout << "Continue viewing new generations?" <<endl;
    while (configuration.user_says_yes()) {
        configuration.update();
        configuration.print();
        cout << "Continue viewing new generations?" <<endl;
    }
    return 0;
}


