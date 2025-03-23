def function(n):
    if(n == 0):
        return "-"
    temp = function(n - 1)
    return temp + " " * 3**(n - 1) + temp

try:
    while True:
        n = int(input())
        print(function(n))
except EOFError:
    pass