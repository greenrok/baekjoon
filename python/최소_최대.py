n = int(input())

list = list(map(int, input().split()))

print(min(list), max(list))

# 이것도 가능하다

n = int(input())
list = list(map(int, input().split()))
max = list[0]
min = list[0]

for i in list[1:]:
    if i > max:
        max = i
    elif i < min:
        min = i

print(min, max)