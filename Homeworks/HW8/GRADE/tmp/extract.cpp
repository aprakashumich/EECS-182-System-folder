#include "extract.h"
#include <iostream>
#include <string>
#include <stdlib.h>
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
 * RETURNS: ID from movieitem and movieititle
 */

void extract_id_and_title(string movieitem, int &id, string &movietitle) 
{
        int firstbar = movieitem.find("|", 0);
        int secondbar = movieitem.find("|", firstbar + 1);
        // Correct or fill in the code to extract and return the title, 
        // given the positions
        // of the first bar and the second bar. Use the substr method
        // on C++ strings.
        // The following code is NOT correct and should cause
        // the test_extract_movie_title() to fail.

        string stringid =  movieitem.substr(0, firstbar);
    id = atoi(stringid.c_str());
    movietitle = movieitem.substr(firstbar+1, secondbar-firstbar-1);
    return;
}

