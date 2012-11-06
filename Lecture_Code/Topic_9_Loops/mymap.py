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


# set_trace sets a breakpoint
#pdb.set_trace();
X = [1, 2, 4, 8];
print "X = ", X;
print "mymap(cube, X):", mymap(cube, X);

def is_odd(x):
    return (x % 2 == 1);

X = [1, 2, 4, 8];
print "X = ", X;
print "mymap(is_odd, X):", mymap(is_odd, X);

# Use the Python built-in map function instead

print "Using built-in map, i.e., map(is_odd, X): ", map(is_odd, X)

# Using reduce

def add(x, y):
    return x+y;

X = [1, 2, 4, 8];
print "X = ", X; 
print "Using built-in reduce as reduce(add, X):", reduce(add, X);

def multiply(x, y):
    return x*y;

X = [1, 2, 4, 8];
print "X = ", X; 
print "reduce(multiply, X):", reduce(multiply, X);

# TASK: Try writing your own version of reduce. Call it myreduce(f, L), where f
# is function that combines two values into one.



# Combining map and reduce: 
# Let's try to sum up cube of values in a list.

A = [1, 2, 3, 4];

# We want to compute cube(1) + cube(2) + cube(3) + cube(4) from A.

print "A = ", A;
print "reduce(add, map(cube, A)): ", reduce(add, map(cube, A));


# Combining filter, map, and reduce:
# Let's try to sum up cube of odd values in a list:

A = [1, 2, 3, 4, 5, 6, 7, 8, 9];
print "A = ", A;
print "sum of cubes of odd values in A as reduce(add, map(cube, filter(is_odd, A))): ", reduce(add, map(cube, filter(is_odd, A)));
    

# Equivalent code using loops for adding cube of odd values.

sum = 0;
for element in A:
    if (element % 2 == 1): # odd
        sum = sum + element*element*element;
print "sum of cubes of odd values for A using loop: ", sum;

# The loop code is not too bad. The advantage of map, filter, and reduce 
# paradigm is that it provides a generic way of thinking about working
# with data in lists. Another advantage is that map and filter can
# be highly parallelized if the list is really long and partitioned across
# multiple machines, unlike the loop, which is inherently sequential. 
# Google uses filter/map/reduce paradigm # extensively for 
# some large-scale data analysis tasks. 


# Using lambda functions

L = [1, 2, 4, 8];
print "Sum of elements of L: ", reduce(lambda x, y : x+y, L);
print "Product of elements of L: ", reduce(lambda x, y : x*y, L);
