#include <iostream>
using namespace std;

// Arrays are passed by reference. That means that the function can
// modify them. So, squares can modify A.

void squares(int B[])
{
  B[4] = B[4]*B[4];
  cout << "B[4] = " << B[4] << endl;
  // This is not allowed.
  // cout << "A[4] = " << A[4] << endl;
}

void foo(int y) {
  cout << y << endl;
}

int main() {
  int A[10]; // Slots from 0 to 9

  A[0] = 0;
  A[1] = 1;
  A[2] = 2;
  A[3] = 3;
  A[4] = 4;
  A[5] = 5;
  A[6] = 6;
  A[7] = 7;
  A[8] = 8;
  A[9] = 9;
  cout << "Before A[4] = " << A[4] << endl;
  squares(A);
  cout << "After squares A[4] = " << A[4] << endl;
  int x = 4;
  foo(x);
  // Prints out A[0] to A[9]
  for (int i = 0; i < 10; i++) {
    cout << "A[" << i << "]=" << A[i] << endl;
  }
}
