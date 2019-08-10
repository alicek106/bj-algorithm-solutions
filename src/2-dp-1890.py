n = int(input())
map_data = []
path_count = []

for i in range(n):
    map_data.append(list(map(int, input().split())))
    path_count.append([0] * n)

path_count[0][0] = 1


for i in range(n):
    for j in range(n):
        if path_count[i][j] == 0:
            continue
        if i + 1== n and j + 1 == n:
            continue

        if i + map_data[i][j] < n:
            path_count[i + map_data[i][j]][j] += path_count[i][j]
        if j + map_data[i][j] < n:
            path_count[i][j + map_data[i][j]] += path_count[i][j]

print(path_count[-1][-1])

