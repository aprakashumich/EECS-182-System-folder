#!/usr/bin/env /usr/bin/python
import subprocess
import pdb
import glob
import random
import md5
import sys

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
    m = md5.new();
    m.update(contents);
    return m.digest();
    

def main(argv):
    if (len(argv) != 4):
        print "Error: usage: runprogram.py executable points resultfile";
    executable = argv[1];
    points = int(argv[2]);
    resultfile = argv[3];
    md5code = getmd5(resultfile);
    result = run_function(executable, points);
    md5code2 = getmd5(resultfile);
    if (md5code != md5code2):
        print "ERROR: Result file tampered by student program";
        exit(-1);
    f = open(resultfile, "a");
    f.write(executable + "\t" + str(points));
    f.close();

if __name__ == "__main__":
    main(sys.argv);

    
