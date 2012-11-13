#include <iostream>
using namespace std;


int x = 0;              // Declare a global variable x

void f1() {
    cout << x << endl;  // prints the value of global x.
    x = x + 1;          // increments global x
}

void f2() {
    int x;              // local x. Masks global x.
    x = 3;              // Sets local x
}

void f3(int x) {         // Parameter x masks global x.
    x = 4;               // x refers to parameter x.
}

void f4(int &x) {        // Alias parameter x masks global x.
    x = 5;               // x refers to aliased parameter x 
}

int main() {
    x = 1;               // Sets global x
    f1();
    cout << "global x after f1() = " << x << endl;
    f2();
    cout << "global x after f2() = " << x << endl;
    f3(x);
    cout << "global x after f3() = " << x << endl;
    int y = 1;
    f4(y);
    cout << "global x after f4() = " << x << endl;
    if (true) {
        int x;             // local x. Masks global x
        x = 20;            // local x
        cout << "local x after x=20: " << x << endl;
    }
    // back to global x. Local x above disappears
    cout << "global x  = " << x << endl;
}
