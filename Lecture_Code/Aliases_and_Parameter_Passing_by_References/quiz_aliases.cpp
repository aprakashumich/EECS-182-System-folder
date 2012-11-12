#include <iostream>
#include <math.h>
#include <assert.h>
using namespace std;

// Following are logical thinking questions to check your understanding 
// on aliases, parameter passing by reference vs. value, and global vs. local
// variables.
// You can confirm your answers by modifying the code, but you should first
// think logically and try to solve the problems in your head.


void q1(int a, int &b) {
    a = a + 1;
    b = b + 2;
    return;
}

void runq1_1() {
    int x = 4;
    int y = 5;
    q1(x, y);
    // Q1: What is the final value of x?
    // Q2: What is the final value of y? 
    int &z = y;
    z = z + 1;
    // Q3: What is the value of y at this point?
}


void runq1_2() {
    int x = 4;
    q1(x, x);
    // Q4: what is the value of x here?
}


void runq1_3() {
    int x = 4;
    int &y = x;
    q1(x, y);
    // Q5: what is the value of x here?
    // Q6: What is the value of y here?
}

void q2(int &a, int &b) {
    b = a;
    a = b * 2;
}

void runq2() {
    int x = 4;
    int y = 5;
    q2(x, y);
    // Q7: What is the value of x?
    // Q8: What is the value of y? 
}


bool q3(double a, double result) {
    if (a < 0) {
        result = sqrt(a);
        return true;
    } else {
        return false;
    }
}

void runq3() {
    double y;
    bool status = q3(4.0, y);
    assert(status == true);
    assert(y == 2);
    status = q3(0,  y);
    assert(status = false);

    // Q: There is a bug in q3. What is the appropriate fix so that
    // the assert tests pass? You do not have to answer this on the
    // test center. Just work it out and make sure understand.
}



int x;

void q4(int a) {
    int x;
    x = a - 1;
    return;
}

void runq4_1() {
    x = 5;
    q4(10);
    //Q9: What is the value of x at this point?
}


void runq4_2() {
    int x = 6;
    q4(10);
    cout << "x here is = " << x << endl;
    //Q10: What is the value of x at this point?
}


void q5(int a) {
    x = a+1;
    return;
}


void runq5_1() {
    int x = 3;
    q5(x);
    //Q11: What is the value of x at this point?
}


void runq5_2() {
    x = 5;
    q5(100);
    //Q12: What is the value of x at this point?
}



void q6(int &a, int &b, int c) {
    a = a+1;
    b = b+1;
    c = c + 1;
    q1(a, b);
}
    
void runq6() {
    int x = 2;
    int y = 5;
    int z = 10;
    q6(x, y, z); // Note: q6 calls q1.
    //Q13: What is the value of x here?
    // Q14: What is the value of y here?
    // Q15: What is the value of z here?
}





int main() {
    cout << "Global x = " << x << endl;
    // Call the various run procedures here once in sequence. 

}

