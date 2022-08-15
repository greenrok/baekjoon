# s = list(input())

# alpahbet_list = ['a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z']

# for i in alpahbet_list:
#     if i in s: 
#         print(s.index(f"{i}"), end=' ')
#     else:
#         print(-1, end=' ')


# 정석적인 방법
s = input()

alphabet = list(range(97, 123))

for i in alphabet:
    print(s.find(chr(i)), end=' ')


# find와 index 함수의 차이
# index는 문자열 뿐만 아니라 리스트, 튜플과 같이 반복가능한 iterable 자료형에서도 찾는 문자의 인덱스를 반환하는 함수로 쓰인다.
# find 함수는 찾는 문자가 문자열 안에 포함되지 않는 경우 -1을 출력하지만 index함수는 error가 발생한다.