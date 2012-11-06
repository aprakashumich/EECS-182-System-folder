

'''
Before the loop, initialize B to be empty list
Go through each element of A.
If the element is odd, then append to the list B.
'''

def myfilter(A):
    '''Filter for odd values'''
    B = [];
    for elem in A:
        if (elem % 2 == 1):
            B.append(elem); # B = B + [elem];
    # end of the loop
    return B;


X = [1, 2, 4, 3, 5, 10, 25, 18, 19];
RESULT = myfilter(X);
print "X = ", X;
print "myfilter(X) result", RESULT;

Y = [2, 10, 11, 6, 4, 3];
RESULT2 = myfilter(Y);
print "Y = ", Y;
print "myfilter(Y) result", RESULT2;


def myfilter2(A):
    '''This function filters for numbers divisible by 3'''
    B = [];
    for elem in A:
        if (elem % 3 == 0):
            B.append(elem); # B = B + [elem];
    # end of the loop
    return B;

X = [1, 2, 4, 3, 5, 10, 25, 18, 19];
Y = [2, 10, 11, 6, 4, 3];
print "X = ", X;
print "myfilter2(X) result", myfilter2(X);
print "Y = ", Y;
print "myfilter2(Y) result", myfilter2(Y);


def my_general_filter(predicate, A):
    '''
    This function filters for any predicate function.
    INPUTS: predicate function. predicate(element) should return True/False
    A: a list of elements
    '''
    B = [];
    for elem in A:
        if (predicate(elem)):
            B.append(elem); # B = B + [elem];
    # end of the loop
    return B;


def is_odd(x):
    if (x % 2 == 0):
        return False;
    else:
        return True;


def divisible_by_three(x):
    return (x % 3 == 0);

L = [1, 2, 4, 3, 5, 10, 15, 17, 19, 21, 18, 16, 25];
print "L = ", L;
print "my_general_filter(is_odd, L):", my_general_filter(is_odd, L);    
print "my_general_filter(divisible_by_three, L): ",  my_general_filter(divisible_by_three, L);

# Assigning f as being equivalent to function is_odd
# Functions are FIRST-CLASS OBJECTS. This means you can them assign
# them to variables, pass them as parameters, etc.
f = is_odd;

print f(4);
print f(3);

# Using the built-in Python's filter function.
print filter(is_odd, X);
