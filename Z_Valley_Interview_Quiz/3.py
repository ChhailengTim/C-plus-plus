n = 5
for i in range(n):
    if i % 2 == 0:
        p = 1
        q = 0
    else:
        p = 0
        q = 1

for j in range(i):
    if j % 2 == 0:
        print(p)
        print(q)
    else:
        print(q)
        print("\n")
