/* WRITE YOUR NAME BELOW:
   Name(s):
   Acknowledgements: 
*/


/* MAJOR TASK 0:
   Complete all the tests first. 
   That will allow you to have the tests ready BEFORE you write the 
   the extract functions in extract.cpp.
   We have given you the code for the first test. Others are 
   going to be similar.

   The names of the tests should be:

   void test_extract_id()
   void test_extract_movie_title()
   void test_extract_moviedate()
   void test_extract_movieurl()

   All the tests should use asserts and do checks on return values
   for the 3 movies above.

   We have given the code for test_extract_id(). That should not 
   require changes.

   You should add the function test_movieurl() first, even an empty one,
   so that this file can be compiled with main.cpp. That function
   is at the end of the file.

   Once you have added an empty test_movieurl(), you can then fill in the
   code for other functions. The general rule is that:

   WRITE THE TEST FUNCTION
   before
   YOU WRITE THE FUNCTION BEING TESTED.

   The only exception is that we are not requiring you to write tests
   for functions in printmovieitem.cpp. The grader program will do that.

*/

#include <string>
#include <assert.h>
#include <iostream>
#include "extract.h"

using namespace std;

/* The keyword "static" before a variable declaration indicates that 
   this variable is visible only within this file. You can use these 
   anywhere inside this file in all the functions since it is declared
   outside the function (this is a "global" variable in C++ terminology). 
   We do that to avoid clashes with variables  of the same name in other 
   modules.
 */

static string testmovieitem1 = "1|Toy Story (1995)|01-Jan-1995||http://us.imdb.com/M/title-exact?Toy%20Story%20(1995)|0|0|0|1|1|1|0|0|0|0|0|0|0|0|0|0|0|0|0";

static string testmovieitem2 = "64|Shawshank Redemption, The (1994)|01-Jan-1994||http://us.imdb.com/M/title-exact?Shawshank%20Redemption,%20The%20(1994)|0|0|0|0|0|0|0|0|1|0|0|0|0|0|0|0|0|0|0";

// Good idea to always do some tests on extreme inputs (boundary cases).
static string testnullmovie = "||||||||||||||||||||||||||||||||";


/*
 This function tests the extract_id() function in extract.cpp.
 It calls that function on some sample inputs and makes sure that
 the correct output is returned.

 assert(x == y) is used to check if x is equal to y. If it is, then
 assert does nothing and the program continues. If it is not, assert
 aborts the program, halting its execution, and prints out an error message.
 That is useful, because that gives you a chance to debug the program
 and not continue on with bad data.

 Notice the use of == (two equals).  The == is a comparison operator, unlike 
 a single =, which is an assignment operator. A common error in C++ is
 to do assert(a = b). Unfortunately, compiler does not catch that and 
 assert will not catch the bug.
*/

void test_extract_id()
{
	string movie_id = extract_id(testmovieitem1);
	assert(movie_id == "1");
	movie_id = extract_id(testmovieitem2);
	assert(movie_id == "64");
	movie_id = extract_id(testnullmovie);
	assert(movie_id == "");
	cout << "extract_id worked on these tests!" << endl;
}





void test_extract_movie_title()
{
	// TASK: Fill in the tests here.

	// You can add cout statements of your choice below to 
	// help figure out whether the values are correct and for
	// debugging.
	
}


void test_extract_moviedate() 
{
	// TASK: Fill in the tests here.


}

	// TASK: Create a function test_extract_movieurl() here.
    // To permit compilation of your program, you should at least
    // add an empty function and fill it in later:
    // void test_extract_movieurl()
    // {
    // }
    //





