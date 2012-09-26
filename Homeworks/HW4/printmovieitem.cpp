#include "printmovieitem.h"
#include "extract.h"
#include <fstream>
#include <iostream>
#include <string>
#include "extract.h"
using namespace std;

/* TASK: Fill in the code to generate the HTML-formatted string
   from the fields of a movie. See the README.txt for the
   format
*/

string helper_gen_html(string movieid, string movie_title, 
	string moviedate, string movieurl) {
	// STUB code. Needs to change so that the return value
	// contains HTML tags, as explained in README.txt.
	return movieid + " " + movie_title + " " +
		moviedate + " " + movieurl + "\n";    
}


/* genhtml_frommovie:
   This function generates an HTML-formatted string
   From the movieitem. Strategy: First extract
   the parts (id, title, date, url), and then
   send them to a helper function to convert to HTML.
   Returns: HTML-formatted version of the movie as a string.
   Example:
   Given:
   INPUT: 
   movieitem = "1|Toy Story (1995)|01-Jan-1995||http://us.imdb.com/M/title-exact?Toy%20Story%20(1995)|0|0|0|1|1|1|0|0|0|0|0|0|0|0|0|0|0|0|0";

   RETURN VALUE:
   <html>
   <body>
   <p>1</p>
   <p><a href="http://us.imdb.com/M/title-exact?Toy%20Story%20(1995)">Toy Story (1995)</a></p>
   <p>01-Jan-1995</p>
   </body>
   </html>
*/

void get_html_from_movie(string movieitem) 
{
	// TASK: Extract the parts using the extract_ functions. Fill
	// this in. 

	// You will need to change the following lines.
	// We have stubbed the function for you so that
	// the code compiles initially and does something.
	string movieid = extract_id(movieitem);
	string movie_title = "stub title value";
	string moviedate = "stub movie date";
	string movieurl = "http://stub_movie_URL/blah";

	//  Call helper_gen_html function with the parts you
	// extracted above and return the resulting string.
	string htmlresult = helper_gen_html(movieid, movie_title, moviedate, movieurl);
	// Print the result to a file.
	string outfilename = movieid + ".html";
	print_to_file(outfilename, htmlresult);
}


	

// You do not have to change this function. It writes the string s
// to the specified filename. In this program, s will be a raw HTML
// string. By writing the HTML to a file, you can view 
// the HTML file in a browser. This is called from main.cpp.

void print_to_file(string filename, string s)
{
	cout << "Outputting HTML to file " << filename << endl;
	cout << "HTML is:\n" << s << endl;
	ofstream myfile(filename.c_str(), ios::out); // Output file stream
	myfile << s << endl;      // Write string s (HTML in this case) to filename
	myfile.close();   // Close the steam.
}
