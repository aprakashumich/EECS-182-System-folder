#include <string>
using namespace std;

class Person {
private:
    string name;
    int yearofbirth;
public:
    Person(string name, int yearofbirth);
    string getname();
    int getage(int currentyear);
};
