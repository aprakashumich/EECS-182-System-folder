def myfilter(A):
    result = [];
    for item in A:
        if (item % 2 != 0):
            result = result + [item];
    return result;


def myfilter(A, odd):
    result = [];
    
