while True:
    n = int(input())
    if n == 0:
        break
    
    a = int(str(n)[::-1])

    if n == a:
        print('yes')
    else:
        print('no')