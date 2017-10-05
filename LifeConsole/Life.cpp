//
//  Life.cpp
//
//  Created by Hal O'Connell on 2012-10-04.
//  Copyright (c) 2012 Hal O'Connell. All rights reserved.
//


#include <iostream>
#include <fstream>
#include "life.h"

using namespace std;



Life::Life() {
    int row, col;
    // initialize the empty grid

    for (row = 0; row <= maxrow+1; row++)
        for (col = 0; col <= maxcol+1; col++)
            grid[row][col] = 0;
}
Life::~Life() {
    // Destructor
    // Free the grid
    delete grid;
}

void Life::print()
/*
 Pre:  The Life object contains a configuration.
 Post: The configuration is written for the user.
 */

{
    int row, col;
    cout << "\nThe current Life configuration is:" <<endl;
    for (row = 1; row <= maxrow; row++) {
        for (col = 1; col <= maxcol; col++)
            if (grid[row][col] == 1) cout << '*';
            else cout << ' ';
        cout << endl;
    }
    cout << endl;
}

int Life::neighbor_count(int row, int col)
/*
 Pre:  The Life object contains a configuration, and the coordinates
 row and col define a cell inside its hedge.
 Post: The number of living neighbors of the specified cell is returned.
 */

{
    int i, j;
    int count = 0;
    for (i = row - 1; i <= row + 1; i++)
        for (j = col - 1; j <= col + 1; j++)
            count += grid[i][j];  //  Increase the count if neighbor is alive.
    count -= grid[row][col]; //  Reduce count, since cell is not its own neighbor.
    return count;
}

void Life::update()
/*
 Pre:  The Life object contains a configuration.
 Post: The Life object contains the next generation of configuration.
 */

{
    int row, col;
    int new_grid[maxrow + 2][maxcol + 2];
    
    for (row = 1; row <= maxrow; row++)
        for (col = 1; col <= maxcol; col++)
            switch (neighbor_count(row, col)) {
                case 2:
                    new_grid[row][col] = grid[row][col];  //  Status stays the same.
                    break;
                case 3:
                    new_grid[row][col] = 1;                //  Cell is now alive.
                    break;
                default:
                    new_grid[row][col] = 0;                //  Cell is now dead.
            }
    
    for (row = 1; row <= maxrow; row++)
        for (col = 1; col <= maxcol; col++)
            grid[row][col] = new_grid[row][col];
}


void Life::initialize()
/*
 Pre:  None.
 Post: The Life object contains a configuration specified by the user.
 */

{
    int row, col;
    ifstream cfgfile("Lifecfg.txt"); // File holding coordinate pair sets


    cout << "Coordinates for living cells now being read from Lifecfg.txt" << endl;

    // replace with file i/o equivalent
    cfgfile >> row >> col;
    
    while (!cfgfile.eof()) {

        if (row >= 1 && row <= maxrow)
            if (col >= 1 && col <= maxcol)
                grid[row][col] = 1;
            else
                cout << "Column " << col << " is out of range." << endl;
            else
                cout << "Row " << row << " is out of range." << endl;
        cfgfile >> row >> col;
    }
    cfgfile.close();
}

void Life::instructions()
/*
 Pre:  None.
 Post: Instructions for using the Life program have been printed.
 Add a few sage words
 */
{
    cout << "Welcome to Conway's game of Life." << endl;
    cout << "This game uses a grid of size "
    << maxrow << " by " << maxcol << " in which" << endl;
    cout << "each cell can either be occupied by an organism or not." << endl;
    cout << "The occupied cells change from generation to generation" << endl;
    cout << "according to the number of neighboring cells which are alive."
    << endl;
}

bool Life::user_says_yes()
{
    int c;
    bool initial_response = true;
    
    do {  //  Loop until an appropriate input is received.
        if (initial_response)
            cout << " (y,n)? " << flush;
        
        else
            cout << "Respond with either y or n: " << flush;
        
        do { //  Ignore white space.
            c = cin.get();
        } while (c == '\n' || c ==' ' || c == '\t');
        initial_response = false;
    } while (c != 'y' && c != 'Y' && c != 'n' && c != 'N');
    return (c == 'y' || c == 'Y');
}

