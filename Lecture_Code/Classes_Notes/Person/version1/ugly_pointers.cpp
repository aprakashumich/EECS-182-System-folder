#include <iostream>
using namespace std;

int main() {
    int p = 4;
    int r;
    int *q = NULL; 
    cout << "Value of q " << q << endl;
    q = &p; // & is being used for address of p. 
    cout << "Value of q after assignment " << q << endl;
    q = q + 1;
   *q = 6;
    cout << "Value of p is " << p << endl;
    cout << "Value of r is " << r << endl;
   cout << "Value of r is " << *q << endl;
}
