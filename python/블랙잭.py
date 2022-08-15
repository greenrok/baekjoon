n, m = map(int, input().split())

numbers = list(map(int, input().split()))

from itertools import combinations

old_list = list(map(sum, combinations(numbers, 3)))

new_list = []
for i in old_list:
    if i <= m:
        new_list.append(i)
    else:
        pass

print(max(new_list))