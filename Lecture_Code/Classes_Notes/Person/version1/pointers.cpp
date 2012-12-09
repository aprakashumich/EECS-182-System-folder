#include <iostream>
using namespace std;

int main() {
    int p;
    int r;
    int *q = NULL;     // q is declared to be a pointer to an integer
    p = 4;
    r = 10;
    cout << "Value of pointer q initially is " << q << endl;
    q = &p;     // q now set to address of p. q points to p.
    cout << "Value of pointer q after q = &p is " << q << endl;
    cout << "Value of p before *q = 5 is " << p << endl;
    *q = 5;     // set the value of whatever q is pointing to to 5.
    cout << "Value of p after *q = 5 is " << p << endl;
    q = &r;
    cout << "Value of pointer q after q = &r is " << q << endl;
    cout << "Value of r before *q = 6 is " << r << endl;
    *q = 6;
    cout << "Value of r after *q = 6 is " << r << endl;

}
