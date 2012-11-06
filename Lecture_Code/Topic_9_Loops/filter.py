

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

def myfilter2(A):
    B = [];
    for elem in A:
        if (elem % 3 == 0):
            B.append(elem); # B = B + [elem];
    # end of the loop
    return B;

def my_general_filter(Predicate, A):
    '''This function filters for numbers divisible by 3'''
    B = [];
    for elem in A:
        if (Predicate(elem)):
            B.append(elem); # B = B + [elem];
    # end of the loop
    return B;
    

X = [1, 2, 4, 3, 5, 10, 25, 18, 19];
RESULT = myfilter(X);
print RESULT;

Y = [2, 10, 11, 6, 4, 3];
RESULT2 = myfilter(Y);
print RESULT2;

print myfilter2(X);
print myfilter2(Y);

def is_odd(x):
    if (x % 2 == 0):
        return False;
    else:
        return True;

print my_general_filter(is_odd, X);

def divisible_by_three(x):
    return (x % 3 == 0);

print my_general_filter(divisible_by_three, X);

# Assigning f as being equivalent to function is_odd
# Functions are FIRST-CLASS OBJECTS. This means you can them assign
# them to variables, pass them as parameters, etc.
f = is_odd;

print f(4);
print f(3);

# Using the built-in Python's filter function.
print filter(is_odd, X);
