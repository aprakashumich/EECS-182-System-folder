def sumlist(L):
    if (L == []):
        return 0;
    else:
        headnode = L[0];
        tail = L[1:];
        return headnode + sumlist(tail);

def sumlist2(L):
    sum = 0;
    for elem in L:
        sum = sum + L;
    return sum;


