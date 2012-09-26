#include <iostream>
#include <string>
#include "extract.h"
#include "printmovieitem.h"
#include "test_extract.h"
#include <assert.h>
using namespace std;




void do_tests() 
{
	test_extract_id();

	/* // UNCOMMENT THESE AS YOU FINISH THE FUNCTIONS.

	test_extract_movie_title();
	test_extract_moviedate();
	test_extract_movieurl();
	*/
}


int main() 
{
	// Let's make sure all the functions in extract.cpp work.
	do_tests();

	// Let's make use of the functions to convert a movieitem
	// to an HTML document. The HTML document will be in the
	// file <movieid>.html. For example, if the movieid is 64,
	// the output file will be in 64.html.


	string testmovieitem1 = "1|Toy Story (1995)|01-Jan-1995||http://us.imdb.com/M/title-exact?Toy%20Story%20(1995)|0|0|0|1|1|1|0|0|0|0|0|0|0|0|0|0|0|0|0";

	string testmovieitem2 = "64|Shawshank Redemption, The (1994)|01-Jan-1994||http://us.imdb.com/M/title-exact?Shawshank%20Redemption,%20The%20(1994)|0|0|0|0|0|0|0|0|1|0|0|0|0|0|0|0|0|0|0";

	
	// These functions make use of extract functions in extract.cpp
	// and then write the output to HTML.
	get_html_from_movie(testmovieitem1);
	get_html_from_movie(testmovieitem2);
}




		
