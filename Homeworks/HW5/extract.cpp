#include "extract.h"
#include <iostream>
#include <string>
using namespace std;

/* WRITE YOUR NAME BELOW:
   Name(s):
   Acknowledgements: 
*/


/* These extraction functions expect a movieitem in the following format:
   "ID | movie title | movie date |some stuff | movie url | arbirary stuff after this"
   Your goal is to write the functions to extract the ID, movie title,
   movie date, and movie url from the strings of the above format.

   No error checking is required at this time. You can add cout statement
   for debugging if you wish. They will not affect the grading.

   Do not change the function name, parameters, or return type, where
   they are given to you. 
*/

/*
 * INPUTS: movieitem in the above format
 * RETURNS: ID from movieitem
 */

string extract_id(string movieitem) 
{
	// Find the location of the first "|" in movieitem
	int firstbar = movieitem.find("|", 0);
	// Extract the substring from position 0 up to location - 1. The
	// string will be of length location.
	string result =  movieitem.substr(0, firstbar);
	// Return the extracted substring
	return result;
}


/*
 * INPUTS: movieitem in the above format
 * RETURNS: title part from movieitem
 */

string extract_movie_title(string movieitem) 
{
	int firstbar = movieitem.find("|", 0);
	int secondbar = movieitem.find("|", firstbar + 1);
	// Correct or fill in the code to extract and return the title, 
	// given the positions
	// of the first bar and the second bar. Use the substr method
	// on C++ strings.
	// The following code is NOT correct and should cause
	// the test_extract_movie_title() to fail. 

	return movieitem.substr(firstbar+1, secondbar);
}



/*
 * INPUTS: movieitem in the above format
 * RETURNS: movie date part from movieitem
 */

string extract_moviedate(string movieitem) 
{
	// Fill in the remaining code to extract the moviedate. One technique
	// is to find the positions of the second '|' and third '|' and then
	// extract the substring between those positions.
	return "";        // Stub code. Will change.

}


/*
 * Add a function extract_movieurl. The function
 * prototype is given in extract.h. 
 * INPUTS: movieitem in the above format (string type)
 * RETURNS: movie url part from movieitem (string type).
 */


