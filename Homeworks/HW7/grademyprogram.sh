#!/bin/sh
echo "Grading the C++ part of the assignment"
g++ -o grade.out grade_loopshw.o loopshw.cpp
./grade.out

echo "Grading the Python part of the assignment"
python grade.pyc

echo "You should add the above two scores for your total autograder score";

echo "Points may be modified during manual grading. Style points will be"
echo "assigned manually"
   
