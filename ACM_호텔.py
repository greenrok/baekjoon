t = int(input())

for i in range(t):
    h,w,n = map(int, input().split())

    list = []
    for i in range(1, w+1):
        for j in range(1, h+1):
            list.append(str(j)+str(i).zfill(2))

    print(list[n-1])

