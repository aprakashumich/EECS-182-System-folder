#include <string>
using namespace std;

extern void get_html_from_movie(string movieitem);
extern string helper_gen_html(string movieid, string movie_title, 
	string moviedate, string movieurl);
extern void print_to_file(string filename, string s);

