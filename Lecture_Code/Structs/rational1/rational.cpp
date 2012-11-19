#include <iostream>
using namespace std;

typedef struct {
    int p;
    int q;
} Rational;

int main() {
    Rational r1, r2;
    // Define r1 to be (3, 4) or ratio of 3 and 4.
    r1.p = 3;
    r1.q = 4;
    // Define r2 to be (9, 5) or ratio of 9 and 5.
    r2.p = 9;
    r2.q = 5;
    cout << "r1 is " << r1.p << "/" << r1.q << endl;
    cout << "r2 is " << r2.p << "/" << r2.q << endl;
}




