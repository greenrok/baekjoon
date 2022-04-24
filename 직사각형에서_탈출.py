x, y, w, h = map(int, input().split())

if h-y > y-0:
    a = y-0
else:
    a = h-y

if w-x > x-0:
    b = x-0
else:
    b = w-x

if a>b:
    print(b)
else:
    print(a)

# 이렇게도 가능하다

# print(min(x, y, h-y, w-x))