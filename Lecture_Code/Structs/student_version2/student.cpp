#include <iostream>
#include <string>
#include "student.h"

using namespace std;


int main() {
    Student s1, s2;
    const int LISTSIZE = 100;
    Student studentlist[LISTSIZE];

    s1.firstname = "Jane";
    s1.lastname = "Doe";
    // Print firstname of studens s1

    cout << s1.firstname << endl;

    // Assign s2's college to "University of Michigan".
    s2.college = "University of Michigan";


    // Assign 2012 as the entry_year for  students in studentlist
    for (int i = 0; i < LISTSIZE; i++) {
        studentlist[i].entry_year = 2012;
    }

    // Print entry_year of student at index 20 in studentlist
    cout << studentlist[20].entry_year << endl;
}

    
