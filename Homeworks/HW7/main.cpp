#include "loopshw.h"
#include <assert.h>
#include <iostream>
using namespace std;

// Test functions for testing average, min, and max.

const double epsilon = 0.01;

void test_average()
{
	/* Create test array X. C++ figures out the size.  Format
	   for this style of initializing an array:

	   TYPE variable[] = {values of the array};
	*/

	int X[]  = {-10, 10, 0, 20, 30, 200, 40, 50, 100, 200};
	// X becomes an array of length 6, with contents as above.
	double result = average(X, 10);
	// cout << result << endl;

	assert(result == 64.0);
	assert(result > 64.0 - epsilon && result < 64.0 + epsilon);

	// Another test.
	int Z[1000];
	// Populate Z with values from -500 to 499.
	for (int i = 0; i < 1000; i++) {
		Z[i] = i-500;
	}
	// This would compute average of values between -500 to 499
	result = average(Z, 1000);
	// cout << "result = " << result << endl;
	assert (result == -0.5);
	cout << "test_average works" << endl;
}

void test_average_validrange()
{
	int X[]  = {-10, 10, 0, 20, 30, 200, 40, 50, 100, 200};
	double result = average_validrange(X, 10);
	// The average of valid values is approximately 35.71.
	// Since floating point values are
    // not exact, we allow the result to be between 35.70 and 35.72.
	// epsilon is 0.01, declared at the top.
	// cout << "result = " << result << endl;
	assert (result > 35.71 - epsilon && result < 35.71 + epsilon);

	int Z[1000];
	// Populate Z with values from -500 to 499.
	for (int i = 0; i < 1000; i++) {
		Z[i] = i-500;
	}
	result = average_validrange(Z, 1000);
	// cout << "result = " << result << endl;
	assert (result == 50.0);

	int Y[]  = {-10, 200};
	assert(average_validrange(Y, 2) == -1.0);
	cout << "test_average_validrange works" << endl;
}

void test_maximum()
{
	int X[]  = {-10, 10, 0, 20, 30, 200, 40, 50, 100, 200};
	assert(maximum(X, 10) ==  200);
	int Y[]  = {-10, -100, -1000, -10000, -5, -6};
	assert(maximum(Y, 5) == -5);
	int Z[] = {4};
	assert(maximum(Z,1) == 4);
	cout << "test_maximum works" << endl;
}



int main() {
	test_average();
	test_average_validrange();
	test_maximum();
}
