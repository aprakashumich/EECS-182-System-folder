'''
This example illustrates how to read lines from a file in Python
and process them. 
'''


f = open("sampleinput.txt", "r"); # open a file for reading
# iterate through the lines in f
for line in f:
    print "line length = ", len(line);
f.close();


    
    
