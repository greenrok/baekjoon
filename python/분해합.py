# 풀이 순서

# 1. 숫자 입력
# 2. for문 1~n까지 반복
# 3. 각 자리수를 분해
# 4. 분해합 구하기
# 5. 분해합이 n과 같으면 종료

n = int(input())
x=0
for i in range(1, n+1):
    a = list(map(int, str(i)))
    s = i + sum(a)
    if s == n:
        x = i
        break
print(x)