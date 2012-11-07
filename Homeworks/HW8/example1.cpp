#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

/* This little program shows how to read lines, one at a time from the
   file "sampleinput.txt".  This program reads the lines and
   prints them out. It also illustrates the use of a global variable.
   In your solution, you can use global variables, for example, for
   the result arrays rather than passing them around as parameters.
*/

// This is an example of a global variable, since it is declared
// outside a function.  It is available to all functions for both
// reading and writing.  This is updated in read_inputfile() and then
// printed by main().

int charactercount;   // Cummulative count of number of characters in the file read.

/* 
This function reads lines from sampleinput.txt, prints them out,
counts characters in them and updates the global variable
charactercount 
*/

void read_inputfile() {
    ifstream readstream;       // Input stream variable
    string inputline;          // variable to hold a line that is read in the loop
    charactercount = 0;
    // associate the stream with file sampleinput.txt.
    // cout << readstream.failbit << endl;
    readstream.open("sampleinput.txt", ifstream::in); 
    // open call sets a flag failbit on the stream if there was an error.
    if (readstream.is_open() == false) { // File did not open.
        cout << "Error in opening file: sampleinput.txt" << endl;
        exit(-1);  // This exits the program. Non-zero exit values are used for errors.
    }

    // File open. Now read the lines.
    while (true) {
        // This reads a line from readstream into inline. It does not read the
        // terminating newline character. success is set to false if
        // the call fails, e.g., at end-of-file
        bool success = getline(readstream, inputline); 
        if (!success) break; // Exit the loop if getline failed. EOF reached.

        // Now you can do what you want with inputline. We will print the line.
        cout << inputline << endl;
        // Also count the characters on the lines and update 
        // the global variable.
        charactercount += inputline.length();
    }

    readstream.close();
}

int main() {
     // read the file. That will update global character counter
    read_inputfile();
    // Print out the result
    cout << "Total number of characters in sampleinput.txt = " << charactercount << endl;
}
