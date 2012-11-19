def create_rational(p, q):
    '''Represent a rational number as a list of two values'''
    return [p, q];


def tostring_rational(r):
    '''This returns a string version of r. Does not actually print'''
    return str(r[0]) + ":" + str(r[1]);

def multiply(x, y):
    num = x[0] * y[0];
    denom = x[1] * y[1];
    return [num, denom];

def add(x, y):
    result = [0, 0];   # Create a placeholder list for the result.
    result[0] = x[0]*y[1] + x[1]*y[0];
    result[1] = x[1]*y[1];
    return result;


def addto(x, y):
    # Parameter x beccomes x*y and is modified if passed as a list.
    result = add(x,y);
    x[0] = result[0];
    x[1] = result[1];
    return;

r1 = create_rational(1, 2);   # Equivalent to r1 = [1, 2];
r2 = create_rational(3, 4);   # Equivalent to r2 = [3, 4];
r3 = multiply(r1, r2);
print "r1 is: " + tostring_rational(r1);
print "r2 is: " + tostring_rational(r2);
print "r3 after r3 = multiply(r1,r2) is: " + tostring_rational(r3);
r4 = add(r1, r2);
print "r4 after r4 = add(r1,r2) is: " + tostring_rational(r4);
addto(r1, r2);
print "r1 after addto(r1, r2) is: " + tostring_rational(r1);
