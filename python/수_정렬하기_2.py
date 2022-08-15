import sys

n = int(input())

m =[]
for _ in range(n):
    m.append(int(sys.stdin.readline()))

m.sort()

for i in m:
    print(i)


# for 문에서 input()을 많이 받으면 시간이 너무 오래 걸림
# sys 모듈을 불러와서 받는다
