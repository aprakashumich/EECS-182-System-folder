#include <iostream>
using namespace std;


int x = 0;

void f1() {
    x = x + 1;     // x refers to global x
}

void f2() {
    int x;         // local x
    x = 3;         // x refers to local x
}

void f3(int x) {
    x = 4;        // x refers to parameter x
}

void f4(int &x) {
    x = 5;        // x refers to parameter x (alias)
}

int main() {
    x = 1;        // refers to global x
    f1();
    cout << "global x after f1() = " << x << endl;
    f2();
    cout << "global x after f2() = " << x << endl;
    f3(x);
    cout << "global x after f3() = " << x << endl;
    f4(x);
    cout << "global x after f4() = " << x << endl;
    if (true) {
        int x;        // local x. Masks global x
        x = 20;       // local x
        cout << "local x after x=20: " << x << endl;
    }
    // back to global x. Local x above disappears
    cout << "global x  = " << x << endl;
}
