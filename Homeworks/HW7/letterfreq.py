
# This function is given to you as an helper. You do not have to modify it.
# It opens a file for reading first (just like you open a book), using
# a Python built-in function, open(filename, mode),
# getting a file handle f. Then, f.read()
# in Python reads the entire contents in one shot. The variable contents
# is a string. Then, the file is closed. Any opened file must be closed,
# just like you close a book after reading.
# The contents of the file are returned.

def getcontents(filename):
    '''
    INPUTS: a file name
    RETURNS: Returns the entire contents of the file in a string form. 
    This will typically be a giant string!
    '''


    f = open(filename, 'r');  # open file, get back a file handle
    contents =  f.read();     # read the file contents in entirety
    f.close();                # close the file
    return contents;          # return the contents that we read.


# You have to write functions below this line. We have given you the stubs


def countletter(s, c):
    '''Return the number of occurrences of character c in string s, 
    ignoring case. Use loops. Do not use the in-built string method, count, 
    which does a similar thing. The idea is to learn to write loops. You 
    should ignore case when comparing a character of s with c. '''


    return 0;    # stub



    
def print_letters_frequency_table(infilename, resultfilename):
    ''' 
    INPUTS: name an input file in the variable infilename and the
            the name of an output file, resultfilename, to which
            letter frequencies will be printed.
    RETURNS: Nothing.

    This function does character frequency analysis on the contents
    of infilename. It print out a table for frequency of
    letters from a to z (case-insensitive) to resultfilename.
    The table has the following format. There is a heading line, following
    by one line for each letter from a to z. There are exactly 
    two tabs between the columns.

    char    freq
    ----    ----
    a     <# of a or A>
    b     <# of b or B>
    ...
    z     <# of z or Z>

    As an example, if one calls:

    print_letters_frequency_table("comedyoferrors.txt", "comedyoferrors_out.txt")

    then, the contents of Shakespeare's Comedy of Errors will be analyzed, with
    input read from comedyoferrors.txt. Frequency of each letter will be printed out in a table to the file comedyoferrors_out.txt. 

    A referece output for comedyoferrors.txt 
    is in comedyoferrors_results_correct.txt. Your result file must match
    that exactly.
    '''

    #The alphabets variable may be useful to you. 
    # You can iterate over its letters, using count_letter(s,c) as a helper.
    # It is OK to make 26 passes over the string s, once per letter in
    # alphabet.

    alphabets = "abcdefghijklmnopqrstuvwxyz";

    # The code below shows you how to write to a file in Python.
    # open(filename, "w"): opens a file for writing. Returns a file handle.
    # filehandle.write(string): writes the string to the file.
    # The code prints the header lines for the table to the resultfile

    print "Writing out results to file: " + resultfilename;

    outfile = open(resultfilename, "w");  # open the output file to write

    outfile.write("char" +"\t\t" + "freq" + "\n");
    outfile.write("----" + "\t\t" + "----" + "\n");

    # Add additional code below. 
    # Basic strategy: you should use getcontents() to
    # fetch the file contents (only need to do that once). Then,
    # you can call count_letter() repeatedly for each letter in the 
    # alphabet to count the frequency of the letter in the file contents.
    # Use outfile.write() to write the letter and frequency to the file.
    # Since outfile is already open, you don't need to reopen it.
    





    # After writing everything, remember to close the file at the end 
    # by calling outfile.close();            







