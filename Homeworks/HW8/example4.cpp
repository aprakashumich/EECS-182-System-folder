#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

/* This program shows how to read an input file with lines of the
   following format:
   <string> <TAB> <number>

   and print out the <number> part from the lines.
   
   Here, we assume that <string> does not have a whitespace within it.
*/

void read_tabular_file() {
    ifstream readstream;       // Input stream variable
    string inputline;               // variable to hold a line that is read in the loop
    cout << "Reading tabular data from sampletable.txt" << endl;
    readstream.open("sampletable.txt");  // associate the stream with file sampleinput.txt.

    if (readstream.is_open() == false) { // File did not open.
        cout << "Error in opening file: sampleinput.txt" << endl;
        exit(-1);  // This exits the program. Non-zero exit values are used for errors.
    }

    // File open. Now read the lines and process them.
    while (true) { 
        // This reads a line from readstream into inline. We must check
        // the return value to see if getline succeeded.
        string firststring;
        int secondnum;
        // Since the format of lines is known and the parts are
        // separated by whitespace, we can just use stream operator >>.
        // It will do type conversion for us. We must check for 
        // errors. readstatus will be false if there is an error in reading, 
        // typically on end-of-file.
        bool readstatus = readstream >> firststring >> secondnum;
        if (readstatus == false) break;   // Exit the loop. EOF reached.
        cout << "number part: " << secondnum << endl;
    }
    readstream.close(); 
}


int main() {
      // read and process the tabular data. 
    read_tabular_file();
}
