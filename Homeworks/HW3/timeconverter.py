# Read hours, minutes, and seconds from standard input (terminal)
# to represent time in hh:mm:ss format.

'''
Note: Multi-line comments in Python can be entered between
triple quotes as these three lines.

Also, Python is picky on indentation. For this program, make sure that
all lines do not have spaces before a Python instruction. Otherwise,
the python interpreter will give an error.
'''


# START of  Not to be modified section of code #
print "Enter hours: "; 
hours = input();
print "Enter minutes: ";
minutes = input();
print "Enter seconds: ";
seconds = input();
  
# Convert everything to seconds
timeinsecs = hours * 60 * 60 + minutes * 60 + seconds;

# Print out the value.
print "OUTPUT: Time in seconds = ";
print timeinsecs;

'''
Task 0. Run the program without changes. It is a good idea to start from
a program that runs. 

% python timeconverter.py
Enter hours: 
23
Enter minutes: 
11
Enter seconds: 
34
OUTPUT: Time in seconds = 
83494
Traceback (most recent call last):
  File "timeconverter.py", line 69, in <module>
    assert(hours2 == hours);
AssertionError
'''
  

'''
Task 1: Convert timeinsecs back to hours, minutes, and seconds
You should get the same values back provided the original minutes
and seconds were less than 60 and all values were non-negative.
Use new variables to represent the values. We have declared them
for you.
'''

hours2 = 0;
minutes2 = 0;
seconds2 = 0;

# END OF DO NOT MODIFY SECTION #

'''
YOUR CODE GOES BELOW.It should compute hours2, minutes2,
and seconds2 from timeinsecs.
Recompile and run your program with several different inputs.
When hours, minutes, and seconds are all non-negative minutes < 60
and seconds < 60, you should not get any assertion failure errors.

On the other hand, you should continue to get assertion failure errors 
when the above constrains on inputs are not observed.
'''
  







'''
END OF YOUR CODE. No changes needed below this line.
Correctness check. C++ gives as an assert function to help do
correctness checks. Do not modify these checks.
'''

assert(hours2 == hours);
assert(minutes2 == minutes);
assert(seconds2 == seconds);

 

'''
What to submit:
  (1) modified timeconverter.cpp that computes hours2, minutes2, and seconds2
   correctly.

  Screenshots showing
  (2)  at least one run where hours, minutes, and seconds
  are all positive, non-zero and < 60. No abort should occur.
  (3) at least one run where either minutes or seconds is larger
  than 60 and other values are positive and < 60. See that the program
  aborts as expected on the correct assertion failure.
'''

