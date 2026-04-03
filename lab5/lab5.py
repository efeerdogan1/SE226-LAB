#Question 1 2 3 

# Question 1
def factorial(n):
    if n == 0 or n == 1:
        return 1
    return n * factorial(n-1)

print(factorial(5))

# Question 2
n = int(input("Give me n"))
x = int(input("Give me x"))

abs_value = lambda x , i : x ** (2*i) / factorial(2*i)

def exp_x(x,n):
    s = 0
    for i in range(n):
        s += ((-1) ** i) * abs_value(x,i)

    return s

print(exp_x(x , n))

# Question 3
result = 0
n = 4
r = 5

def recursiveFunc(n, r):
    """
    Recursive logic:
    - Uses a global variable 'result' to accumulate the sum.
    - Adds r**n to result, then calls itself with n-1.
    - Base case: when n < 0, stop recursion.

    Sign handling:
    - If r is negative, odd powers become negative and even
      powers become positive automatically through r**n.
    """
    global result
    if n < 0:
        return
    result += r ** n
    recursiveFunc(n - 1, r)

print(recursiveFunc(n,r))