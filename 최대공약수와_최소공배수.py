from re import A


x, y = map(int, input().split())

# yak_list = []
# yak2_list = []
# bae_list = []
# bae2_list = []

# # 최대공약수 구하기
# # n = x, y 값, m = x, y값
# def yak(n):
#     for i in range(1, n+1):
#         if n % i == 0:
#             yak_list.append(i)
        
#     for i in yak_list:
#         if yak_list.count(i) == 2:
#             yak2_list.append(i)


# # 최소공배수 구하기
# # n = x, y 값, m = 자연수
# def bae(n, m):
#     for i in range(1, m):
#         bae_list.append(n*i)

#     for i in bae_list:
#         if bae_list.count(i) == 2:
#             bae2_list.append(i)

# yak(x)
# yak(y)
# bae(x, 5)
# bae(y, 5)


# # print(yak_list)
# # print(bae_list)
# # print(yak2_list)
# # print(bae2_list)
# print(max(yak2_list))
# print(min(bae2_list))

def gcd(x, y):
    if x>y:
        while y>0:
            x, y = y, x % y
        return x
    else:
        while x>0:
            y, x = x, y % x
        return y

def lcm(x, y):
    return x * y / gcd(x, y)

print(gcd(x, y))
print(int(lcm(x, y)))



        