while True:
    try:
        a, b = map(int, input().split())
        if a+b != 0:
            print(a+b)
        else:
            break
    except:
        break