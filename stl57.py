<<<<<<< HEAD
t = int(input())
arr = []
for _ in range(t):
    n, x, k = input().split()
    i = 0
    while int(k) * i <= int(x):
        arr.append(int(k) * i)
        i += 1
    j = 0

    while (int(n) + 1) - int(k) * j >= int(x):
        arr.append(int((int(n) + 1) - int(k) * j))
        j += 1
    if int(x) not in arr:
        print("NO")
    else:
=======
t = int(input())
arr = []
for _ in range(t):
    n, x, k = input().split()
    i = 0
    while int(k) * i <= int(x):
        arr.append(int(k) * i)
        i += 1
    j = 0

    while (int(n) + 1) - int(k) * j >= int(x):
        arr.append(int((int(n) + 1) - int(k) * j))
        j += 1
    if int(x) not in arr:
        print("NO")
    else:
>>>>>>> 967555c9dba04b0165dc34b5b3033939519a65ab
        print("YES")