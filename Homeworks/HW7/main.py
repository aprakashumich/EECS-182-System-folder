from letterfreq import *;

# You need to write the following functions
# test_countletter(): tester for countletter()
# countletter(s, c): counts the number of occurences of c in s.


'''
A. Search through a string and return the frequency of occurrence of
the given letter in it. Ignore case when counting.
E.g., countletter("abcAde", 'a') should return 2, since 'a' occurs
twice in the list (ignoring case). 

Building blocks available to you: C++ strings can be indexed, like
arrays. For example, s[0] gives the first character, s[1] next, etc.
To get length of a string s, you can simply use the built-in method
len(s). Also, Python provides methods s.lower() and s.upper() to convert
a character or string to lower or upper cases. You can use those.
'''

def test_countletter():
    '''We provide you a pretty reasonable tester. You can add additional
      tests if needed to test your function. .'''

    assert(countletter("", "a") == 0);
    assert(countletter("a", "a") == 1);
    assert(countletter("a", "A") == 1);
    assert(countletter("b", "c") == 0);
    assert(countletter("A", "a") == 1);
    assert(countletter("abcab", "a") == 2);
    assert(countletter("ABCaB", "a") == 2);
    assert(countletter("abcdab\na", "x") == 0);
    assert(countletter("abc\naab", "a") == 3);
    assert(countletter("abc\naaba", "a") == 4);
    assert(countletter("abc\naaba", "A") == 4);


def test_print_letters_frequency_table():
    '''Testing this function is tricky since it proceduces output
    a terminal (stdout). But, Python provides a way to switch standard
    output to a file by redefining the variable sys.stdout. We will
    show you how to do that below.
   '''
    filename = "comedyoferrors.txt";
    outfile = "comedyoferrors_studentout.txt";
    refout = "comedyoferrors_correctoutput.txt";
    stdoutsave = sys.stdout;
    sys.stdout = open(outfile, "w");
    print_letters_frequency_table(filename);
    sys.stdout.close();
    sys.stdout = stdoutsave;
    f = open(outfile);
    studentcontent = f.read();
    f.close();
    refout = "comedyoferrors_correctoutput.txt";
    g = open(refout);
    profcontent = g.read();
    g.close();
    if (profcontent != studentcontent):
        print "print_letters_frequency_table failed"
        print "Your output and correct output differ"
    else:
        print "You passed the print_letters_frequency_table test"


    


# Define and call main.

def main():
    # Run some unit tests on individual functions
    test_countletter();
    # Print out the table for comedy of errors
    print_letters_frequency_table("comedyoferrors.txt", 
                                  "comedyoferrors_results.txt");
    print_letters_frequency_table("macbeth.txt", 
                                  "macbeth_results.txt");

    print "Run the diff command as in the instructions to see if your output matches the correct output, e.g.,;"
    print;
    print "% diff comedyoferrors_results.txt comedyoferrors_results_correct.txt";
    print;
    print "The above command should produce no output on a perfect match.";
    print "If you get some differences, then your output is not correct.";
    print;
    print "Run a similar diff command on the macbeth files";
    
        


# Call main() to run all the tests.

main()
