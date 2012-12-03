#include <string>
#include "Person.h"
using namespace std;

Person::Person(string name, int yearofbirth) {
    this->name = name;
    this->yearofbirth = yearofbirth;
}

string Person::getname() {
    return this->name;
}


int Person::getage(int currentyear) {
    return currentyear - this->yearofbirth;
}
