def function(n):
    i = 1
    j = 1
    k = 1
    while n != 0:
        j = n % 2
        i = i + j * j
        k = k * 10
        n = n / 2
    return i


print(function(10))
