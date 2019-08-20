n, k = map(int, input().split())
coins = [int(input()) for _ in range(n)]

narray, karray = [0] * (n + 1), [0] * (k + 1)
karray[0] = 1

for i in range(0, n):
    for j in range(1, k + 1):
        if j - coins[i] >= 0:
            karray[j] = karray[j] + karray[j - coins[i]]
        else:
            karray[j] = karray[j]

print(karray[k])
