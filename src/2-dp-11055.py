n = int(input())
answer = list(map(int, input().split()))
dp = [0] * n

for i in range(0, n):
    for j in range(0, i):
        if answer[j] < answer[i]:
            if dp[i] < dp[j]:
                dp[i] = dp[j]

    dp[i] += answer[i]

print(max(dp))
