#include "square.h"
#include <iostream>
#include <assert.h>
using namespace std;

/*
void test_square() {
    assert(square(0) == 0);
    assert(square(2) == 4);
    assert(square(-4) == 16);
}
*/

int main() {
    printtableofsquares(4, 10);
    printtableofsquares(10, 1000);
}

