#include <string>
using namespace std;

class Person {
private:
    string name;
    int yearofbirth;
public:
    Person(string name, int yearofbirth) {
        this->name = name;
        this->yearofbirth = yearofbirth;
    }
    string getname() {
        return this->name;
    }
    int getage(int currentyear) {
        return currentyear - this->yearofbirth;
    }
};
