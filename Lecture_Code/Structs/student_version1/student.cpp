#include <iostream>
using namespace std;

typedef struct {
    string firstname;
    string lastname;
    string college;
    int entry_year;
} Student;


int main() {
    Student s1, s2;
    const int LISTSIZE = 100;
    Student studentlist[LISTSIZE];
    
    // Initialize s1
    s1.firstname = "Jane";
    s1.lastname = "Doe";
    s1.college = "Michigan State University";
    s1.entry_year = 2010;

    // Print firstname of students s1
    cout << s1.firstname << endl;

    // Initialize s2
    s2.firstname = "Adam";
    s2.lastname = "Smith";
    s2.entry_year = "2011";
    s2.college = "University of Michigan";

    // Print s2's fields.
    cout << s2.firstname << ", " 
         << s2.lastname << ", "
         << s2.college << ", " 
         << s2.entry_year << endl;

    
    // The code below illustrates working with arrays.

    // Assign 2012 as the entry_year for all the students in studentlist
    for (int i = 0; i < LISTSIZE; i++) {
        studentlist[i].entry_year = 2012;
    }

    // Print entry_year of student at index 20 in studentlist
    cout << studentlist[20].entry_year << endl;
}

    
