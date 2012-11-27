'''
Base case:
count([]) = 0;

Divide-and-conquer step:
count(L) = 1 + count(tail(L));

'''

def tail(L):
    return L[1:];

def count(L):
    if (L == []):
        return 0;
    else:
        return 1 + count(tail(L));
