#include "extract.h"
#include <assert.h>
#include <iostream>
#include <sstream>
using namespace std;

bool test_extract_id_and_movietitle() {
    string movie1 = "3|Four Rooms (1995)|01-Jan-1995||http://us.imdb.com/M/title-exact?Four%20Rooms%20(1995)|0|0|0|0|0|0|0|0|0|0|0|0|0|0|0|0|1|0|0";
    string movie2 = "1||05-Feb-1996||http://us.imdb.com/M/title-exact?From%20Dusk%20Till%20Dawn%20(1996)|0|1|0|0|0|1|1|0|0|0|0|1|0|0|0|0|1|0|0";
    string studentmovie = 
        "1|Toy Story (1995)|01-Jan-1995||http://us.imdb.com/M/title-exact?Toy%20Story%20(1995)|0|0|0|1|1|1|0|0|0|0|0|0|0|0|0|0|0|0|0";
    string movie4="35|Free Willy 2: The Adventure Home (1995)|01-Jan-1995||http://us.imdb.com/M/title-exact?Free%20Willy%202:%20The%20Adventure%20Home%20(1995)|0|0|1|0|1|0|0|0|1|0|0|0|0|0|0|0|0|0|0";
    try {
        int id;
        string title;
        extract_id_and_movietitle(movie1, id, title);
        assert(id == 3);
        assert(title == "Four Rooms (1995)");
        extract_id_and_movietitle(studentmovie, id, title);
        assert(id == 1);
        assert(title == "Toy Story (1995)");
        extract_id_and_movietitle(movie2, id, title);
        assert(id == 1);
        assert(title == "");
        return true;
    } catch (int e) {
        return false;
    }
}

void sanitize(string filename) {
    assert(filename.substr(0,11) == "graderesult");
}




int main(int argc, char **argv) {
    if (argc != 2) {
        cerr << "No argument supplied to main" << endl;
    }
    stringstream ss;
    ss << argv[1];
    long successreturncode;
    bool status = ss >> successreturncode;
    if (!status) {
        cerr << "illegal argument to main supplied" << endl;
        assert(false);
    }
    bool resultcode = test_extract_id_and_movietitle();
    if (resultcode) {
        cout << "gradeextract: Test successful" << endl;
        return successreturncode;
    } else {
        return -1;
    }
}
