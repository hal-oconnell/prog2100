#include <iostream>
using namespace std;

/*Function to find minimum of x and y*/
int bitmin(int x, int y)
{
    int t1, t2, t3, t4;
    t1=-(x<y); // will set t1 to either -1 or 0
    t2=(x^y); // Calculates parity bit mask of x and y by XOR
    t3 = t2 & t1; // bitwise AND sets the bit in t3 if the corresponding bit of t2 and t1 are also set
    t4 = y ^ t3; // XOR with y and t3 calculates parity bit mask (either no change if y is MIN, else flips bits to x)

    cout << endl << "-(x<y) = " << t1 << endl;
    cout << "x^y = " << t2 << endl;
    cout << "((x ^ y) & -(x < y)) =" << t3 << endl;
    cout << "And finally; y ^ ((x ^ y) & -(x < y)) = " << t4 << endl;
    return y ^ ((x ^ y) & -(x < y));
}

/*Function to find maximum of x and y*/
int bitmax(int x, int y)
{
    int t1, t2, t3, t4;
    t1=-(x<y);
    t2=(x^y);
    t3 = t2 & t1;
    t4 = x ^ t3;

    cout << endl << "-(x<y) = " << t1 << endl;
    cout << "x^y = " << t2 << endl;
    cout << "((x ^ y) & -(x < y)) =" << t3 << endl;
    cout << "And finally; x ^ ((x ^ y) & -(x < y)) = " << t4 << endl;
    return x ^ ((x ^ y) & -(x < y));
}

int main() {
    int op1, op2;
    int result;
    op1 = 5;
    op2 = 10;

    cout << "For op1=5 and op2 = 10..." << endl;
    result = bitmin(op1, op2);
    cout << endl << "Minimum: " << result << endl;
    result = bitmax(op1, op2);
    cout << "Maximum: " << result << endl;
    // Now reverse the operands
    op1 = 10;
    op2 = 5;

    cout << endl << endl << "For op1=10 and op2 = 5..." << endl;
    result = bitmin(op1, op2);
    cout << endl << "Minimum: " << result << endl;
    result = bitmax(op1, op2);
    cout << "Maximum: " << result << endl;
}