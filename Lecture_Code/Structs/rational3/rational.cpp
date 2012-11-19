#include <iostream>
#include <sstream>
using namespace std;

typedef struct {
    int p;
    int q;
} Rational;

// Create a  rational number from two integers and return it.
Rational create_rational(int x, int y) {
    Rational result;
    result.p = x;
    result.q = y;
    return result;
}


// A convenience function to compute a string
// form of a rational value for printing. To convert from
// ints to strings, in C++, the easiest way is to write first
// to a stringstream type and then convert to a string. 

string tostring_rational(Rational r) {
    stringstream result;
    result << "Rational(" << r.p << "," << r.q << ")";
    return result.str();
}

// Multiply two rational numbers and return the resulting rational number.
// This version uses reference parameters, which is preferred for
// passing around structures. Use const for semantics similar to 
// pass-by-value.
Rational multiply(const Rational &r1, const Rational &r2) {
    Rational result;
    result.p = r1.p * r2.p;
    result.q = r1.q * r2.q;
    return result;
}



int main() {
    Rational r1, r2;
    // We use the create_rational() function defined above this time
    // unlike in rational1. 
    r1 = create_rational(3, 4);
    r2 = create_rational(9, 5);

    // Try out multiply function.
    r1 = create_rational(1, 2);
    r2 = create_rational(2, 3);
    Rational r3 = multiply(r1, r2);
    cout << "product of " << tostring_rational(r1) 
         << " and " 
         << tostring_rational(r2) << " is "
         << tostring_rational(r3) << endl;
}





