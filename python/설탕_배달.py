# n = int(input())

# 처음 짠 코드 맞긴 한데 틀림
# if (n % 5) % 3 == 0:
#     a = n // 5
#     b = (n % 5) // 3
#     print(a+b)
# elif (n % 5) % 3 != 0 and n % 3 != 0:
#     if (n // 5) != 0 and ((n % 5) + 5) % 3 == 0:
#         a = n // 5 - 1
#         b = ((n % 5) + 5) // 3
#         print(a+b)
#     else:
#         print(-1)
# elif (n % 5) % 3 != 0 and n % 3 == 0:
#     print(n//3)
# else:
#     a = (n // 5) - 1
#     b = ((n % 5) + 5) // 3
#     print(a+b)


n = int(input())

bag = 0
while n >= 0:
    if n % 5 == 0:
        bag += n // 5
        print(bag)
        break
    n -= 3
    bag += 1
else:
    print(-1)
        