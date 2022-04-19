a = int(input())
b = int(input())
c = int(input())

abc = str(a*b*c)

for i in range(10):
    count = abc.count(f"{i}")
    print(count)
