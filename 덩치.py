n = int(input())

list = []
for _ in range(n):
    n, m = map(int, input().split())
    list.append((n,m))

# list에 튜플로 추가
# list = [(55, 185), (58, 183), (88, 186), (60, 175), (46, 155)]

for i in list:
    grade = 1
    for j in list:
        if i[0] < j[0] and i[1] < j[1]:
            grade += 1
    print(grade, end=' ')