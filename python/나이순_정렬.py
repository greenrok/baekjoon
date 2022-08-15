n = int(input())

join = []

for _ in range(n):
    a, b = input().split()
    a = int(a)
    join.append((a,b))

join.sort(key = lambda x : x[0])

for i in join:
    print(i[0], i[1])