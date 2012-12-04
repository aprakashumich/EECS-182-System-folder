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
    Person(string name, int birthyear) {
        this->name = name;
        this->yearofbirth = birthyear;
    }
    /* Overloaded constructor with a default year of birth */
    Person(string name) {
        this->name = name;
        this->yearofbirth = 2012;
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
};
int main() {
    Person p1("John", 1970);
    Person p2("Mitt");
    p1.setaddress("1301 Beal Ave, Ann Arbor, MI 48109");
    cout << p1.getaddress() << endl;
    // p1.setname("John");
    cout << "P1's name is " << p1.getname() << endl;
    cout << "P2's name is " << p2.getname() << endl;
    cout << p2.getyearofbirth() << endl; // Access to private data. Will fail.
    cout << p2.getname() << " age is " << p2.getage(2012) << endl; // Access to private data. Will fail.
}


