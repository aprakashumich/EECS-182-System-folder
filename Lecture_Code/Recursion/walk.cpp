#include <iostream>
using namespace std;

void walktogoal(int distance) {
    cout << "Entering walktogoal: with distance = " << distance << endl;
    if (distance == 0) {
        cout << "Reached goal" << endl;
        cout << "Exiting walktogoal: with distance = " << distance << endl;
        return;
    } else {
        cout << "Take one step " << endl;
        walktogoal(distance - 1);
        cout << "Exiting walktogoal: with distance = " << distance << endl;
    }
}
       


int main() {
    walktogoal(4);
}
