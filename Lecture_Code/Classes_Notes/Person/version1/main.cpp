#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int yearofbirth;
public:
    /* Construct the object, given a name and a year of birth */
    Person(string name, int yearofbirth) {
        this->name = name;
        this->yearofbirth = yearofbirth;
    }
    /* A method to get the name of the person */
    string getname() {
        return this->name;
    }
    /* get their age */
    int getage(int currentyear) {
        return currentyear - this->yearofbirth;
    }
};

int main() {
    Person p1("John", 1970);
    Person p2("Mary", 1963);
    cout << p1.getname() << " is " 
         << p1.getage(2012) << " years old"<< endl;
    cout << p2.getname() << " is " 
         << p2.getage(2012) << " years old"<< endl;
}

