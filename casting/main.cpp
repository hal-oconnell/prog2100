
// Simple routine to demonstrate the basics of type casting (no relation to movies, sorry)


#include <iostream>
using namespace std;

int main() {
    int i1, i2, i3; // a series of simple integers
    double d1, d2, d3; // a series of doubles
    char c1, c2, c3; // and now characters

    // Here is what happens when type casts are done, implicitly converting the contents of a variable to
    // a different type. Casting has no effect on the original variable

    i1 = 2;
    i2 = 4;
    i3 = 10;
    d1 = 1.0;
    d2 = 2.5;
    d3 = 10; // note that there is an implicit decimal point, even if we don't see it
    c1 = 'a';
    c2 = 'b';
    c3 = 'A'; // A and a are different values, as we will see

    cout << "Integer divide of " << i1 << " by " << i2 << " = " <<  i1/i2 << endl; // integer division
    cout << "Float cast on integer divide of " << i1 << " by " << i2 << " = " << (float) i1/i2 << endl; // integer division with floating point cast on result
    cout << (int) c3 << " is the integer cast value of " << c3 << endl;
    cout << (double) c3 << " is the double cast value of " << c3 << endl;
    cout << "What does it mean to add two characters? Here is " << c1 << " plus " << c2 << " giving " << c1+c2 << endl;
    cout << "What value was that? Here is is cast as an int to see. c1 is " << (int) c1 <<" and c2 is "
        << (int) c2 << ", so c1 + c2 is " << (int) c1+c2 << endl;


    return 0;
}
