n = int(input())

sl = []
for i in range(n):
    sl.append(input())

a = set(sl)
sl = list(a)

sl.sort()
sl.sort(key = len)

for i in sl:
    print(i)