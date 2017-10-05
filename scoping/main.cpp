#include <iostream>
#include <string>

using namespace std;

static const string mystring = "Global string";
const int myint = 10;

void Messwithstring(){
    string mystring = "Function string";
    int myint = 9;
    std::cout << mystring << " as of Function print 1" << std::endl;
    std::cout << myint << " as of Function print 1" << std::endl;
    int idx = 0;
    while (idx == 0){
        string mystring = "Loop string";
        int myint = 8;
        std::cout << mystring << " as of Loop print 1" << std::endl;
        std::cout << myint << " as of Loop print 1" << std::endl;
        idx = 1;
        if (idx == 1) {
            string mystring = "If String";
            std::cout << mystring << " as of If print" << std::endl;
        }
        std::cout << mystring << " as of Loop print 2" << std::endl;
    }
    std::cout << mystring << " as of Function print 2" << std::endl;
    std::cout << myint << " as of Function print 2" << std::endl;

}
int main() {
    std::cout << mystring << " at start." << std::endl;
    std::cout << myint << " at start." << std::endl;
    Messwithstring();
    std::cout << mystring << " at end." << std::endl;
    std::cout << myint << " at end." << std::endl;
    return 0;
}