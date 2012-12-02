import sys
import pdb
def filterlines(filterstring):
    '''
    Print lines containing filterstring, ignoring characters prior to 
    filterstring on the line. Reads from standard input and writes to
    standard output.
    Example:
    If filterstring is "SEARCH OUTPUT: ", it will look for this string
    on each line and output the text starting from "SEARCH OUTPUT: ".
    '''
    for line in sys.stdin:
        pos = line.find(filterstring);
        if (pos == -1):
            continue;
        else:
            line = line[pos:];
            sys.stdout.write(line);

def main(argv):
    #pdb.set_trace();
    if (len(argv) != 2):
        print "Error: usage: filterlines.py filterfile";
        return;
    # filterfile should contain the starting string for valid lines that should be compared
    # with reference output. filterlines filters out any output from student code that
    # does not start with those lines.
    f = open(argv[1]);
    contents = f.read();
    contents = contents.strip();
    f.close();
    filterlines(contents);

    
if __name__ == "__main__":
    main(sys.argv);
    

    
    
