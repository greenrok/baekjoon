n, m = map(int, input().split())

chess = []
p_chess = []

for i in range(n):
    chess.append(input())

for i in range(n-7):
    for j in range(m-7):
        cw = 0
        cb = 0
        for a in range(i, i+8):
            for b in range(j, j+8):
                if (a+b) % 2 == 0:
                    if chess[a][b] != 'W':
                        cw += 1
                    else:
                        cb += 1
                else:
                    if chess[a][b] != 'B':
                        cw += 1
                    else:
                        cb += 1
        p_chess.append(cw)
        p_chess.append(cb)

print(min(p_chess))

                
        