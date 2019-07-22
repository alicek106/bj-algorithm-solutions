mapper = {}
for i in range(ord('a'), ord('z') + 1):
    if i + 13 > ord('z'):
        mapper[chr(i)] = chr(i - 13)
    else:
        mapper[chr(i)] = chr(i + 13)

for i in range(ord('A'), ord('Z') + 1):
    if i + 13 > ord('Z'):
        mapper[chr(i)] = chr(i - 13)
    else:
        mapper[chr(i)] = chr(i + 13)

data = input()
output = ""
for char in data:
    if char not in mapper:
        output += char
    else:
        output += mapper[char]

print(output)
