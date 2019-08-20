count = int(input())
lst = []
dp = [0] * count

for i in range(count):
    lst.append(int(input()))

dp[0] = lst[0]

for i in range(1, count):
    if i == 1:
        dp[1] = lst[0] + lst[1]
    elif i == 2:
        dp[2] = max(dp[i - 1], lst[2] + lst[1], lst[2] + lst[0])
    else:
        drink_this_wine_max = max(lst[i] + lst[i - 1] + dp[i - 3], lst[i] + dp[i - 2])
        dp[i] = max(dp[i - 1], drink_this_wine_max)

print(max(dp))
