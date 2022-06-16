def function(n):
    k = 1
    sum = 1
    while k < n:
        value = 0
        while value <= k - 1:
            sum += sum * value
            value += sum
        else:
            k += k
    else:
        return sum


print(function(3))
