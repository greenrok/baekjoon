n, k = map(int, input().split())

def eh(n, k):
    if k == 0 or k == n:
        return 1
    else:
        return eh(n-1, k-1) + eh(n-1, k)


print(eh(n, k))