n = int(input())

if n % 5 < 3:
    a = (n // 5) - 1
    b = ((n % 5) + 3) // 3
    print(a+b)
elif n // 5 == 0 or ((n % 5) % 3 != 0):
    print(-1)
else:
    a = n // 5
    b = ((n % 5) // 3)
    print(a+b)


    