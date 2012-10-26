# Python lists know their size. We don't supply the size as a parameter.
def squares(B):
    '''
    B[0] = B[0]*B[0];
    ...
    B[size-1] = B[size-1] * B[size-1];
    '''
    # Trust us. This loops through all values in B.
    for i in range(len(B)):
        B[i] = B[i]*B[i];
    # end of for loop
# end of squares
        
# Test
A = [0,1,2,3,4,5,6,7,100];
print "A before squaring", A;
squares(A);
print "A after squaring", A;
    
    
    
