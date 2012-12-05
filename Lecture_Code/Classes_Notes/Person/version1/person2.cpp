#include <string>
#include <iostream>
using namespace std;
/* Equivalent to:
   typedef struct {
   string name;
   int yearofbirth;
   } Person;
*/

class Person {
private:
    string name;
    int yearofbirth;
    string address;

public:
    Person *mom;
    Person *dad;
    Person(string name, int birthyear) {
        this->name = name;
        this->yearofbirth = birthyear;
        this->address = "";
        this->mom = NULL;
        this->dad = NULL;
    }
    /* Overloaded constructor with a default year of birth */
    Person(string name) {
        this->name = name;
        this->yearofbirth = 2012;
        this->mom = NULL;
        this->dad = NULL;
            
    }
    string getname() {
        return this->name;
    }
    int getyearofbirth() {
        return this->yearofbirth;
    }
    int getage(int currentyear) {
        return currentyear - this->yearofbirth;
    }
    void setAddress(string address) {
        this->address = address;
    }
    string getAddress() {
        return this->address;
    }

};
    
int main() {
    Person p1("John", 1970);
    Person p2("Mary", 1972);
    Person p3("George", 1998);
    p3.dad = &p1;
    p3.mom = &p2;
    cout << p3.dad->getname() << endl;
    cout << (*(p3.dad)).getname() << endl;
    cout << p3.mom->getname() << endl;

}
	    


