t = int(input())


for i in range(t):
    r, s = input().split()
    str = ''
    for i in s:
        str += int(r) * i
    print(str)