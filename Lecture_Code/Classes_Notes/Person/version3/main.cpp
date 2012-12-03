#include <iostream>
#include <string>
#include "Person.h"
using namespace std;

int main() {
    Person p1("John", 1970);
    Person p2("Mary", 1963);
    cout << p1.getname() << " is " 
         << p1.getage(2012) << " years old"<< endl;
    cout << p2.getname() << " is " 
         << p2.getage(2012) << " years old"<< endl;
}

