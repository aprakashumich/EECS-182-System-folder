/* This example illustrates the use of passing parameters by reference */

#include <iostream>
using namespace std;

/* This function modifies both x and y. The & before the parameter makes
   it a modifiable parameter (pass by reference parameter) */
void foo(int &x, int &y) {
    /* This solution uses 2 temp variables. It is also possible to just use 1 */
    x = 4;
    y = 5;
}

int main() {
    int x;
    int y;
    // These will have random values initially, since they are uninitialized.
    cout << "x and y are " << x << " and " << y << endl;
    // Now call foo to set both x and y.
    foo(x,y);
    cout << "x and y after calling foo are " << x << " and " << y << endl;
}
    
