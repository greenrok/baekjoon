n = int(input())

for i in range(n):
    ox_list = list(input())

    total = 0
    count = 0
    for i in ox_list:
        if i == 'O':
            total += (count + 1)
            count += 1
            # count += 1
            # total += count
            # 이렇게 하면 코드가 더 간편 결과는 동일
        else:
            count = 0
    print(total)

        