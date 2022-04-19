list = list(map(int, input().split()))

new_list = []

for i in list:
    new_list.append(i ** 2)

last_num = sum(new_list) % 10

print(last_num)