t = int(input())

for _ in range(t):
    k = int(input())
    n = int(input())

    list = [x for x in range(1, n+1)]

    for i in range(k):
        for j in range(1, n):
            list[j] += list[j-1]

    print(list[-1])