//   Temperature Converter
//   Author: Hal O'Connell
//   April 2017
#include <iostream>

using namespace std;

int main() {
	int fahr, celsius;
    int lower, upper, step;

    lower = -40;
    upper = 300;
    step = 20;
    fahr = lower;
    // print header
    cout << "Fahrenheit" << '\t' << "  Celsius" << endl;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        cout << fahr << " degrees = " << celsius << " degrees" << endl;
        fahr = fahr + step;
    }

}