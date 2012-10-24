A = [0, 1, 2, 3, 4, 5, 6, 7]

print A[0];
print A[1];
print A[2];

A[3] = 10;
print "A = ", A;

A.append(100);

print "A using a loop";
for item in A:
    print item;

# Python lists know their size. We don't supply the size as a parameter.
def squares(B):
    size = len(B);   # Look up the size
    '''
    B[0] = B[0]*B[0];
    ...
    B[size-1] = B[size-1] * B[size-1];
    '''
    # Trust us. This loops through all values in B.
    for i in range(size):
        B[i] = B[i]*B[i];
        
        
print "A before squaring", A;
squares(A);
print "A after squaring", A;
    
    
    
