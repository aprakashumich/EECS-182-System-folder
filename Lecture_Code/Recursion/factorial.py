def factorial(n):
    if (n == 0 or n == 1):          # base case
        return 1;
    else:                           # divide and conquer step
        return n*factorial(n-1);
