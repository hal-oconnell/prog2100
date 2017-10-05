// Demonstrates some of the aspects of the
// standard oder of operations

#include <iostream>

int main() {
    int A = 3; // our starting point

    std::cout << "Starting value of A = " << A << std::endl;
    A = A + ++A + A * A;
    std::cout << "Final value of A = " << A << std::endl;
    // RESET a to 3 between each step
    A = 3;
    std::cout << "What happened?" << std::endl;
    std::cout << "First ++A = " << ++A << std::endl;
    A = 3;
    A= ++A; // need to to get to correct starting point for next operation
    std::cout << "Then (with A now 4), A * A = " << A*A << std::endl;

    A = 3;
    std::cout << "And then +A plus ++A + *A = " << ++A + A*A << std::endl;
    A = 3;
    std::cout << "And finally adding revised A of 4 to previous = " << A + ++A + A * A << std::endl;

    return 0;
}