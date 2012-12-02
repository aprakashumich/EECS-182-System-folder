#!/usr/bin/env /usr/bin/python
import subprocess
import pdb
import glob
import random
import md5
import sys
import pdb

def run_function(executable, points):
    random.seed();
    MAXINT = 2**31;
    val = random.uniform(MAXINT/2, MAXINT);
    runargs = [executable] + [str(val)];
    try:
        resultcode = subprocess.call(runargs);
        if (resultcode ==val):
            return points
        else:
            return 0;
    except subprocess.CalledProcessError:
        return 0;

def getmd5(filename):
    f = open(filename);
    contents = f.read();
    contents = contents.strip();
    m = md5.new();
    m.update(contents);
    f.close();
    print m.hexdigest();
    return m.hexdigest();
    

def main(argv):
    if (len(argv) < 5):
        print "Error: usage: rundiff.py category student_output points resultfile md5hash0 md5hash1 ...";
    #pdb.set_trace();
    category = argv[1];
    studentout = argv[2];
    studentmd5 = getmd5(studentout);
    match = False;
    points = argv[3];
    resultfile = argv[4];
    truemd5files = argv[5:];
    for truemd5file in truemd5files:
        md5file = open(truemd5file, "r");
        md5refval = md5file.read().strip();
        md5file.close();
        if (studentmd5 == md5refval):
            match = True;
    if (not match):
        points = 0;
    f = open(resultfile, "a");
    f.write(category + "\t" + str(points) + "\n");
    f.close();

if __name__ == "__main__":
    main(sys.argv);
