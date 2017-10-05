//
//  life.h
//  Life-cmd
//
//  Created by Hal O'Connell on 2012-10-04.
//  Copyright (c) 2012 Hal O'Connell. All rights reserved.
//

#ifndef Life_cmd_life_h
#define Life_cmd_life_h



const int maxrow=20, maxcol=60; // grid dimensions

class Life {
public:
    Life();
    ~Life();
    void initialize();
    void print();
    void update();
    void instructions();
    bool user_says_yes();
private:
    int grid[maxrow+2][maxcol+2]; // allows sentinels
    int neighbor_count(int row, int col);
    
};

#endif
