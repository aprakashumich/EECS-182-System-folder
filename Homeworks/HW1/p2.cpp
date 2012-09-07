#include <iostream>
using namespace::std;

/* HW1: Problem 2 */

// Anything between /* and */ is a comment in C++ and ignored by
// by the compiler. Also anything after a // is ignored by the compiler

/*  
 * Task 0: Run the program as is by compiling it and running it. It should print "Hello World".
 * The % indicates the terminal prompt. You need to open a Terminal, and type "cd Homeworks/HW1"
 * before running these commands to change to the Homeworks/HW1 folder.

      % g++ -o p2.out p2.cpp
      % p2.out

 

 *  Task 1:  First remove the p2.out file.
	% rm p2.out
   
    Now, reRun the program by compiling it using an alternative method of using Makefiles. 
      % make
      % p2.out

    Explanation: The first command above runs a program called "make". "make" uses the compilation rules in a file named "Makefile" to build p2.out from p2.cpp.

 * The remaining tasks ask you to make changes to this file, recompile it, run it to see that the
 * changes do the right thing, and then submit the modified program..

 * Task 3: Add your name below
 * Name: xxxxxxxxxxxxxxxxxxx

 * Task 4: Acknowledge any significant help received below. If no significant
 * help received, indicate so. Feel free to add additional lines.
 * Acknowledgements: xxxxxxxxxxxxxxx
 */


int main() {
  /* Task 5:
    Replace "Hello World" by "Go Blue!".
    Compile and run your program.
   Submit the revised program, p2.cpp, and a screenshot
   that shows the Terminal window with the commands you typed and the result.  
   */

  cout << "Hello World" << endl;
}
