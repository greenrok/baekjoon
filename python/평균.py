n = int(input())
a = list(map(int, input().split()))

# 가장 큰 점수를 구한다
m = max(a)

c = []
for i in a:
    c.append((i/m)*100)

avg = sum(c)/n

# avg = round(avg, 6)
print(avg)