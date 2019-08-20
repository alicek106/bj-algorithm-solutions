count = int(input())
lst = []
max_lst = []

for i in range(count):
    lst.append(list(map(int, input().split())))
    max_lst.append([0] * (count + 1))

max_lst[0][0] = lst[0][0]

for i in range(1, count):
    for j in range(i + 1):
        if j == 0:
            max_lst[i][j] = max_lst[i - 1][0] + lst[i][j]
        elif j == len(max_lst[i]) - 1:
            max_lst[i][j] = max_lst[i - 1][j] + lst[i][j]
        else:
            max_lst[i][j] = max(max_lst[i - 1][j - 1] + lst[i][j], max_lst[i - 1][j] + lst[i][j])

print(max(max_lst[-1]))
