n = int(input())

number = input()

list = []

for i in range(len(number)):
    list.append(number[i])

list_ch = map(int, list)
print(sum(list_ch))



# 다른 방법 사용하기

# total = 0
# for i in range(n):
#     total += int(number[i])
# print(total)