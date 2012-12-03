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
public:
    string name;
    int yearofbirth;


};


int main() {
    Person p1;
    Person p2;
    p1.name = "John";
    p1.yearofbirth = 1970;
    p2.name = "Mary";
    p2.yearofbirth = 1963;
    cout << p1.name << " is " << 2012-p1.yearofbirth << " years old \n";
    cout << p2.name << " is " << 2012-p2.yearofbirth << " years old \n";
}


