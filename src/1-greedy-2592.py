n = int(input())
array = input().split()
used = [False] * 10
answers = []


def func(pos, count, answer):
    if count == n:
        answers.append(answer)
        return

    used[pos] = True
    for j in range(0, 10):
        if used[j]:
            continue

        if (array[count] == "<" and j > int(answer[count])) or (array[count] == ">" and j < int(answer[count])):
            data = answer + str(j)
            func(j, count + 1, data)

    used[pos] = False

for pos in range(0, 10):
    func(pos, 0, str(pos))

print(answers[len(answers) - 1])
print(answers[0])

