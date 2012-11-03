#!/bin/sh
echo "Points received:\t0" > GRADERESULT_loopshw.txt
echo "Grading the C++ part of the assignment (out of 15 points)"
echo "If you get compiler errors, consider your score to be 0"
g++ -o grade.out grade_loopshw.o loopshw.cpp
./grade.out

echo "Grading the Python part of the assignment (out of 10 points)"
python grade.pyc

echo "You should add the above two scores for your total autograder score";

echo "Points may be modified during manual grading. Style points will be"
echo "assigned manually"
   
