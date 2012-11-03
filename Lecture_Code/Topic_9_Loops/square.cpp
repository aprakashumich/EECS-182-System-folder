#include "square.h"
#include <iostream>
using namespace std;

int square(int x) {
    return x*x;
}

void printtableofsquares(int start, int end) {
    cout << "number" << "\t" << "square" << endl;
    // Print a table of squares of values from 1 to 10
    for (int i = start; i <= end; i++) {
        if (i % 2 == 0) {
            cout << i << "\t" << square(i) << endl;
        }
    }
}
