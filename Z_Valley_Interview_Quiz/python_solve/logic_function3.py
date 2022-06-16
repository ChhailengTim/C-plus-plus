def Function(num1, num2, num3):
    if num1 > num2:
        if num1 > num3:
            print(num1)
        else:
            print(num3)
    elif num2 > num3:
        print(num2)
    else:
        print(num3)


print(Function(12, 43, 34))
