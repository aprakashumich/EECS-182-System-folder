#include <iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

/* This little program shows how to read an input file and compute character count
   for each line as lines are read. The counts are stored in the array below,
   one value for each line. The program assumes at most 100 lines in the input.
   
   Once the entire file is read and the array filled, the array is printed to
   an output file.
*/

// Global variables. These are updated and read by the functions in this file

const int MAXLINES = 100; 
int perline_charcount[MAXLINES]; 
int linecount;

/* This function reads lines from sampleinput.txt, prints them 
   out, counts characters in them and stores them in the global array
   perline_charcount. It also updates linecount.
 */

void read_inputfile() {
    ifstream readstream;       // Input stream variable
    string inputline;               // variable to hold a line that is read in the loop
    readstream.open("sampleinput.txt");  // associate the stream with file sampleinput.txt.

    if (readstream.is_open() == false) { // File did not open.
        cout << "Error in opening file: sampleinput.txt" << endl;
        exit(-1);  // This exits the program. Non-zero exit values are used for errors.
    }
    // File open. Now read the lines and process them. This loop below
    // counts the lines read as well as updates the global array that tracks
    // the number of characters per line.
    linecount = 0;
    while (true) { 
        // This reads a line from readstream into inline. We must check
        // the return value to see if getline succeeded.
        bool status = getline(readstream, inputline, '\n'); 
        if (!status) break; // exit the loop if getline fails. End-of-file.
        cout << inputline << endl;
        // Update the global variables, line counter and # of characters on each line.
        perline_charcount[linecount] = inputline.length();
        linecount++;
        // Print out an error if the array is too short for the # of lines.
        if (linecount > MAXLINES) {
            cout << "Error: Too many lines in the file to process" << endl;
            exit(-1);
        }
    }
    readstream.close();
    // At this point, perline_charcount array should have the counts of characters
    // for each line.
}


/* This function shows you how to write things to an output file instead of
   standard output. It writes out the values in the global array perline_charcount
   to a file example3_out.txt. */

void writeresults() {
    ofstream outf;            // Output stream
    cout << "Writing results to example3_out.txt" << endl;
    outf.open("example3_out.txt"); // Associate the stream with the output file.

    for (int i = 0; i < linecount; i++) {
        // write the count to sampleoutput.txt
        outf << perline_charcount[i] << endl; 
    }
    outf.close();
}

int main() {
      // read the data. That will update global variables.
    read_inputfile();
    // Now write out the results.
    writeresults();
}
