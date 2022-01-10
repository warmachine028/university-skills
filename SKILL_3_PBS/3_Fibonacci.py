""" CODE 3: 
WAP to print the following sequence of numbers 0,1,1,2,3,5,8,13,21,………..
Input: 9
Output: 0 1 1 2 3 5 8 13 21


"""


def fibo(n):
    if n:
        return 1 if n < 3 else fibo(n - 1) + fibo(n - 2)
    return n 
    

print("Output:", *[fibo(i) for i in range(9)])
