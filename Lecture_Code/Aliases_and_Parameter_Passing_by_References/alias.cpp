#include <iostream>
using namespace std;

// Demonstrate the use of aliases. See Lecture Notes on Parameter passing 
// by Reference

void f1() {
    cout << "Example 1 of aliases" << endl;
    int a = 4;
    int &b = a;    // Declares alias b. Binds to a.
    cout << "Initial a =  " << a << endl;     // prints out 4.
    cout << "Initial b (alias) =  " << b << endl;     // prints out 4.
    b = 5;                // Sets a to 5, since b is an alias of a.
    cout << "Final a = " << a << endl;     // prints out 5
    cout << "Final b (alias of a) = " << b << endl << endl;

}

void f2() {
    int a = 4;
    int c = 3;
    cout << "Example 2 of aliases" << endl;
    int &b = a;         // Declares and binds alias b to a.
    cout << "Initial a, b (alias), c = " << a << ", " << b << ", " 
         << c << endl;
    b = c;   // Q: Does b become bound to c? Or does a become 3? 
    b = b - 1;  // Which variable changes here?
    cout << "Final a, b (alias), c = " << a << ", " << b << ", " << c << endl;
}

int main() {
    f1();
    f2();
}

