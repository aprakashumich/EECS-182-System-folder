#include <iostream>
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

// Another convenience function to print out a rational value as a
// ratio of its p and q to standard output.
void print_rational(Rational r) {
    cout << r.p << ":" << r.q << endl;
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

// Computes product of two rationals a:b and c:d as (ad+bc):bd.
Rational add(const Rational &r1, const Rational &r2) {
    Rational result;
    result.p = r1.p*r2.q + r2.p*r1.q;
    result.q = r1.q*r2.q;
    return result;
}

// Adds rational r2 to r1. The function does not return anything via
// return value. It modifies r1. Note that r1 is a reference parameter and
// is not constant, since we want to change r1.
void addto(Rational &r1, const Rational &r2) {
    r1 = add(r1, r2);
    return;
}



int main() {
    Rational r1, r2;
    // We use the create_rational() function defined above this time
    // unlike in rational1. 
    r1 = create_rational(3, 4);
    r2 = create_rational(9, 5);

    // Let's test assignment of rationals.
    cout << "r1 before assignment: ";
    print_rational(r1);
    cout << "r2 before assignment: ";
    print_rational(r2);
    r1 = r2;
    cout << "r1 after assignment: ";
    print_rational(r1);
    cout << "r2 after assignment: ";
    print_rational(r2);

    // Try out multiply function.
    r1 = create_rational(1, 2);
    r2 = create_rational(2, 3);
    Rational r3 = multiply(r1, r2);
    cout << "product of " 
         << r1.p << ":" << r1.q << " and " 
         << r2.p << ":" << r2.q  << " is "
         << r3.p << ":" << r3.q << endl;

   // Try out add function.
    r1 = create_rational(1, 2);
    r2 = create_rational(2, 3);
    r3 = add(r1, r2);
    cout << "sum of " 
         << r1.p << ":" << r1.q << " and " 
         << r2.p << ":" << r2.q  << " is "
         << r3.p << ":" << r3.q << endl;

   // Try out addto function.
    r1 = create_rational(1, 2);
    r2 = create_rational(2, 3);
    cout << "Old r1 = " << r1.p << ":" << r1.q << endl;
    cout << "r2 = " << r2.p << ":" << r2.q << endl;
    addto(r1, r2);
    cout << "r1 and r2, respectively, after addto(r1,r2): " 
         << r1.p << ":" << r1.q << " and " 
         << r2.p << ":" << r2.q << endl;
 
}





