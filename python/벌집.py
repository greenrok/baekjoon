n = int(input())

count = 1
num = 1

while True:
    if num >= n:
        break
    num += 6*count
    count += 1

print(count)