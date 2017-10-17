#include <iostream>
using namespace std;

class Number {
public:
    int num;
    Number() : num(-1) {}
    Number( int num ) { this->num = num;}
    ~Number() {}

    Number& operator=( Number num ) {
        this->num = num.num;
        return *this;
    }

    Number& operator+( Number& num2 ) {
        this->num += num2.num;
        return *this;
    }

    Number& operator*( Number& num2 ){
        this->num *= num2.num;
        return *this;
    }

};

int main() {
    Number n1(1), n2(2), n3(3), n4(4);
    cout << "N1 = " << n1.num << endl;
    cout << "N2 = " << n2.num << endl;
    cout << "N3 = " << n3.num << endl;
    cout << "N4 = " << n4.num << endl;

    n1 = n2 * n3 + n4;

    cout << "After N1 = N2 * N3 + N4" << endl;
    cout << "N1 = " << n1.num << endl;
    cout << "N2 = " << n2.num << endl;
    cout << "N3 = " << n3.num << endl;
    cout << "N4 = " << n4.num << endl;

    cout << "Reset Numbers." << endl;
    n1.num = 1;
    n2.num = 2;
    n3.num = 3;
    n4.num = 4;

    cout << "After N1 = N2 + N3 * N4" << endl;
    n1 = n2 + n3 * n4;
    cout << "N1 = " << n1.num << endl;
    cout << "N2 = " << n2.num << endl;
    cout << "N3 = " << n3.num << endl;
    cout << "N4 = " << n4.num << endl;

    return 0;
}