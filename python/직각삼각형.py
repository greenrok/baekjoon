while True :
    nums = list(map(int, input().split()))
    if sum(nums) == 0:
        break  # 세 수가 0이면 break
    max_num = max(nums)
    nums.remove(max_num)  # 빗변의 길이는 직각삼각형 세변의 길이중 가장 길다.
    if nums[0]**2 + nums[1]**2 == max_num**2:
        print('right')
    else:
        print('wrong')


## 틀린 코드

# while True :
#     a, b, c = map(int, input().split())
#     if a == b == c == 0:
#         break
#     if a**2 + b**2 == c**2:
#         print('right')
#     else:
#         print('wrong')