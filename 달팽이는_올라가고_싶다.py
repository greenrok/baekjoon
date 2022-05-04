a, b, v = map(int, input().split())

# go = 0
# day = 0
# while go <= v:
#     go += a
#     if go == v or go > v:
#         day += 1
#         break
#     else:
#         go -= b
#         day += 1
# print(day)

# 위 코드는 시간초과

k = (v-b)/(a-b) # 오르는 일수 계산
print(int(k) if k == int(k) else int(k)+1)
# 풀이 
# (v-b)/(a-b) == 4라면 k == int(k)이다
# (v-b)/(a-b) == 4.1이라면 k != int(k)이다
# 따라서 int(k)+1이 된다
