#include <iostream>
#include <assert.h>
using namespace std;

/* File: timeconverter.cpp
 * Your name: PUT YOUR NAME HERE.
 */

int main() {
  int hours;
  int minutes;
  int seconds;

  // Read hours, minutes, and seconds from standard input (terminal)
 // to represent time in hh:mm:ss format.

  /*START of  Not to be modified section of code */
  cout << "Enter hours: "; 
  cin >> hours;
  cout << "Enter minutes: ";
  cin >> minutes;
  cout << "Enter seconds: ";
  cin >> seconds;
  
  // Convert everything to seconds
  int timeinsecs = hours * 60 * 60 + minutes * 60 + seconds;

  // Print out the value.

  cout << "OUTPUT: Time in seconds = " << timeinsecs << endl;

  /* Task 0. Compile and run the program. It is a good idea to start from
     a program that compiles properly. Here is a sample run:

     % g++ -Wall timeconverter.cpp
     % a.out
     Enter hours: 23
     Enter minutes: 24
     Enter seconds: 40
     Time in seconds = 84280
     a.out: timeconverter.cpp:45: int main(): Assertion `hours2 == hours' failed.
     Aborted

  */

  /* Task 1: Convert timeinsecs back to hours, minutes, and seconds
     You should get the same values back provided the original minutes
     and seconds were less than 60 and all values were non-negative.
     Use new variables to represent the values. We have declared them
     for you.
  */

  int hours2 = 0;
  int minutes2 = 0;
  int seconds2 = 0;
  /* END OF DO NOT MODIFY SECTION */

  // YOUR CODE GOES BELOW.It should compute hours2, minutes2,
  // and seconds2 from timeinsecs.
  // Recompile and run your program with several different inputs.
  // When hours, minutes, and seconds are all non-negative minutes < 60
  // and seconds < 60, you should not get any assertion failure errors.

  // On the other hand, you should continue to get assertion failure errors 
  // when the above constrains on inputs are not observed.




  // END OF YOUR CODE. No changes needed below this line.
  // Correctness check. C++ gives as an assert function to help do
  // correctness checks. Do not modify these checks.

  assert(hours2 == hours);
  assert(minutes2 == minutes);
  assert(seconds2 == seconds);

 

  // What to submit:
  // (1) modified timeconverter.cpp that computes hours2, minutes2, and seconds2
  // correctly.

  // Screenshots showing
  // (2)  at least one run where hours, minutes, and seconds
  // are all positive, non-zero and < 60. No abort should occur.
  // (3) at least one run where either minutes or seconds is larger
  // than 60 and other values are positive and < 60. See that the program
  // aborts as expected on the correct assertion failure.


}
