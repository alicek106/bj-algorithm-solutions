import heapq

n = int(input())
minheap = []
maxheap = [] # pivot
answer = []

data = int(input())
heapq.heappush(maxheap, (-data, data))
answer.append(data)

for _ in range(1, n):
    data = int(input())
    if data >= maxheap[0][1]:
        heapq.heappush(minheap, data)
    else:
        heapq.heappush(maxheap, (-data, data))
    if len(minheap) > len(maxheap):
        data = heapq.heappop(minheap)
        heapq.heappush(maxheap, (-data, data))
    elif len(maxheap) - 1 > len(minheap):
        data = heapq.heappop(maxheap)[1]
        heapq.heappush(minheap, data)
    answer.append(maxheap[0][1])

for i in answer:
    print(i)
