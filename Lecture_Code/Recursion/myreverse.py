'''
Base case:
myreverse([]) = ?
myreverse(L) = combine head and myreverse(tail)
               myreverse(tail) + [head]


'''
def head(L):
    return L[0];

def tail(L):
    return L[1:];

def myreverse(L):
    if (L == []):
        return [];
    else:
        return myreverse(tail(L)) + [head(L)];
