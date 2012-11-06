import pdb
'''
Goal: We want to apply a function like cube to every element of a list and
get back a new list.

Recipe:

result list should be initialized to empty.
Go through each element of the input list:
   apply the function to the element and append to the result list.
'''

def mymap(f, L):
    '''Apply f to element of L and return the resulting list. L itself
       is not modified. We return a new list.'''
    result = [];
    for element in L:
        result.append(f(element));
    # end of for loop
    return result;

def cube(x):
    return x*x*x;

X = [1, 2, 4, 8];

# set_trace sets a breakpoint
#pdb.set_trace();
print mymap(cube, X);

def is_odd(x):
    return (x % 2 == 1);

print mymap(is_odd, X);

# Use the Python built-in map function instead

print "Using built-in map: ", map(is_odd, X)

# Using reduce

def add(x, y):
    return x+y;

X = [1, 2, 4, 8];
print "Using built-in reduce with add function", reduce(add, X);

def multiply(x, y):
    return x*y;

print reduce(multiply, X);

# Try writing your own version of reduce. Call it myreduce(f, L), where f
# is function that combines two values into one.


# Let's try to sum up cube of values in a list.

A = [1, 2, 3, 4];

# We want to compute cube(1) + cube(2) + cube(3) + cube(4) from A.

print map(cube, A);
print reduce(add, map(cube, A));
print "A = ", A

    
