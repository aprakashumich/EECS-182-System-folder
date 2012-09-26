'''TASK: Fill in the code to generate the HTML-formatted string
   from the fields of a movie. See the README.txt for the
   format
'''

def print_movie_in_html(movieid, movie_title, moviedate, movieurl):
	'''STUB code. Needs to change so that the return value
	contains HTML tags, as explained in README.txt.'''

	resulthtml = movieid + " " + movie_title + " " +  moviedate + " " + movieurl + "\n";    
        # Output resulthtml to a file
        print_to_file(movieid + ".html", resulthtml);
        return resulthtml;


'''
You do not have to change this function. It writes the string s
to the specified filename. In this program, s will be a raw HTML
string. By writing the HTML to a file, you can view 
the HTML file in a browser. This is called from main.cpp.
'''

def print_to_file(filename, s):
    f = open(filename, "w");
    f.write(s);
    f.close();



def main():
    result = print_movie_in_html("1", "Sample movie", "1-1-2005", "http://imdb.com");
    print result;

main();
