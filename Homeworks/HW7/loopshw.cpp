#include <assert.h>
#include <iostream>
using namespace std;



// Compute average of values in array A that is of size n.
// This function is given to you as an example.
double average(int A[], int n)
{
	assert(n > 0);
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum = sum + A[i];
	}
	// Need to do floating-point division. Convert sum to double.
	return double(sum)/n;
}


// Write the remaining functions that are given in loopshw.h
// You can test your code by compiling it with main.cpp and running
// the executable. You are only graded on the contents of this file,
// not main.cpp.

