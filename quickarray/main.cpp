#include <iostream>


// Quickarray.cpp : Defines the entry point for the console application.
//
#define MINSZ 0
#define MAXSZ 100

using namespace std;
void mod1Darray(int *p, int);
int main(int argc, char** argv) {
    int *myarray;
    // maxcol mimic count of lines from file
    // set by read from cin
    int maxcol;

    // dynamically allocate an array
    // maxcol = line length
    cout << "Enter integer between 1 and 100" << endl;

    cin >> maxcol;
    while ((maxcol < MINSZ) || (maxcol > MAXSZ)) {
        cout << "Invalid dimension, enter integer between 1 and 100" << endl;
        cin >> maxcol;
    }

    myarray = new int [maxcol];
    for (int count = 0; count < maxcol; count++)
    {
        myarray[count] = count;
    }

    // Write them back out
    cout << "Here is your array" << endl;
    for (int idx = 0; idx < maxcol; idx++)
    {
        cout << myarray[idx] << "  ";
    }
    cout << endl;
    cout << "Updating array" << endl;

    mod1Darray(myarray, maxcol);

    cout << "Here is your revised array" << endl;
    for (int idx = 0; idx < maxcol; idx++)
    {
        cout << myarray[idx] << "  ";
    }
    cout << endl;
    cout << "Deleting matrix and terminating" << endl;

    // To free the dynamically allocated memory
    // Delete each row pointer before deleting the array of pointers


    delete[] myarray;

    cin.ignore();
    return 0;
}

void mod1Darray(int *p, int size) {
    for (int i = 0; i < size; i++)
    {
        p[i]+=15;
    }

}