def compare_dictionary_order(s1, s2):
    '''Write a function that compares two strings, s1 and s2, in
       dictionary order, rather than lexicographic order. It returns
       -1 if s1 comes first, 0 if the two strings are equal, and +1 if
       s1 comes later in dictionary order. In a dictionary, for the
       same letter, capital value of the letter come before the
       lowercase value and letters are compared left to right. For
       example, "AAa" should come before "aaA".  You can assume that
       there are no spaces or non-alphabet characters in the string.

	To do that, you should first change both s1 and s2 to lower
	case and then compare them.  A possible recipe is as follows:
	
	If (lowercase version of s1 < lowercase version of s2) then
	the answer is -1 Else if (lowercase version of s1 > lowercase
	version of s2) then the answer is +1 Else if (lowercase
	version of s1 is equal to lowercase version of s2), then use
	the lexicographic order to compare the strings and return the
	result.

	Python provides a method s.lower() that returns a copy of s
	that is in lower case. s itself not modified by the method.
	'''

    # We give a buggy solution below. Modify the code below so that it 
    # does the right thing as specified above.

    if (s1.lower() > s2.lower()): 
        return -1;
    else:
        return 0;
	

# No changes required below this line. But, you can modify the tests
# if you wish to. We are only testing the function above.


def test_compare_dictionary_order():
    assert(compare_dictionary_order("abc", "def") == -1);
    assert(compare_dictionary_order("abc", "DEF") == -1);
    assert(compare_dictionary_order("abc", "ABC") == +1);
    assert(compare_dictionary_order("abc", "abc") == 0);
    assert(compare_dictionary_order("abcd", "abc") == +1);
    assert(compare_dictionary_order("ABc", "AbC") == -1);
    print "Congraduations: You passed your tests";


def main():
    test_compare_dictionary_order();

# Call the main function, which calls the test function to check the 
# correctnes. No changes required.
# The following is a common idiom in Python programs for calling a
# main() function. The main 
# function will execute if you run this file from a Terminal. However,
# main will not run if you import it as a module.

if __name__ == "__main__":
    main();

    
